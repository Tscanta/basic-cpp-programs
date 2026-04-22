#include <iostream>
using namespace std;
class Template {
public:
    template <typename T>
    void add(T a, T b)
    {
        cout << a + b << endl;
    }
};
int main() {
    Template temp;
    temp.add(5,5);
    temp.add(12.2,45.3);
    // temp.add("apple","cider");
    return 0;
}