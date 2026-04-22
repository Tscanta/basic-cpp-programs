#include <iostream>
using namespace std;
class SpecificExceptionVerification
{
    public:
     void verify(int p)//only able to throw int data type
    {
        if (p==0)
            throw p;
        else
            cout << "No error detected. End of the verify()\n";
    }
};

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    try
    {
        SpecificExceptionVerification sev;
        sev.verify(n);
    }
    catch (int i)//stores the thrown variable
    {
        cout << "Integer exception has been caught";
    }
        cout << "This is the end of the main function\n";
}