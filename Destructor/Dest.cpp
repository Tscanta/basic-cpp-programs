#include <iostream>
using namespace std;
class dest {
    static int count;
    public:
        dest() {
            count++;
            cout << "Objects Created: " << count << endl;
        }
        ~dest() {
            cout << "Objects Destroyed: " << count << endl;
            count--;
        }
};
int dest::count=0;

int main() {
    dest ob1,ob2,ob3;
    return 0;
}