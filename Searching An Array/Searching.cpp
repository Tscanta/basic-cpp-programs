//Searching from an Array
#include <iostream>
using namespace std;

int SearchArray(int array[], int size, int element);

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10}; //Our main array
    int size = sizeof(numbers)/sizeof(numbers[0]); //The length of the array
    int index; //Index number for out key number
    int mynum; //Stores the key number

    cout << "Enter the element that you want to search for: " << '\n';
    cin >> mynum;

    index = SearchArray(numbers, size, mynum);

    if (index != -1)
    {
        cout << mynum << " found at " << index << endl;
    }
    else
    {
        cout << mynum << " not found" << endl;
    }
    return 0;
}

//Function for searching
int SearchArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;15
}
