//Overloading a binary operator
#include <iostream>
using namespace std;
class bin
{
public:
    int num;
    bin(int n)
    {
        num = n;
    }
    bin operator+ (bin b)
    {
        return bin(num+b.num);
    }
};

int main()
{
    bin b1(12);
    bin b2(21);
    bin b3(0);
    b3 = b1 + b2;
    cout << "sum: " << b3.num;
    return 0;
}
