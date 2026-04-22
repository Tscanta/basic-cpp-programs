//Overloading a unary operator
#include <iostream>
using namespace std;
class unary {
public:
    int num;
    unary(int n)
    {
        num = n;
    }
    unary operator-()
    {
        return unary(-num);
    }
};

int main()
{
    unary u1(12);
    unary u2(0);
    u2 = -u1;
    cout << u2.num;
    return 0;
}