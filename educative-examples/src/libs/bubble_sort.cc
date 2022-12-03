#include <iostream>

using namespace std;


void print_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

void bubble_sort(int arr[], int size)
{
    for(int index = 0; index < size; index++)
    {
        for(int i = 0; i < size-1; i++)
        {
            if( arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void sort_elements(int arr[], int size)
{
    bubble_sort(arr, size);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    
    print_array(arr, 5);

    sort_elements(arr, 5);

    print_array(arr, 5);

    return 0;
}
