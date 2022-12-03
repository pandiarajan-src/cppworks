#include <iostream>

using namespace std;

void left_rotate(int arr[], int size)
{
    for(int index = 0; index < size-1; index++)
    {
        int temp = arr[index];
        arr[index] = arr[index+1];
        arr[index+1] = temp;
    }
}

void print_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    print_array(arr, 5);

    left_rotate(arr, 5);

    print_array(arr, 5);

    return 0;
}