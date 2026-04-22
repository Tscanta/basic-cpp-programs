//BUBBLE SORT
#include <iostream>
using namespace std;

void sort(int arr[], int size);

//MAIN FUNCTION
int main()
{
    int arr[] = {12,10,4,5,0,6,3,2,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted Array: " << endl;
    cout << "{";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout  << "}" << endl;

    sort(arr,size);

    cout << "Sorted Array: " << endl;
    cout << "{";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout  << "}";

return 0;
}

//SORTING
void sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size-1; i++) { //left elements
        for (int j = 0; j < size - i - 1; j++) { // right elements
            if (arr[j] > arr[j+1]) { //if elements on the left is greater than the elements on the right
                //if want to print in descending order use [if (arr[j] < arr[j+1])]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}