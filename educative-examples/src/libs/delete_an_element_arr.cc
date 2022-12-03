#include <iostream>

using namespace std;

void delete_element(int *&arr, int size, int index) {
  // Write your code here
  int *new_arr = new int[size-1];
  for(int i = 0; i < size-1; i++)
  {
    if(i < index)
    {
        new_arr[i] = arr[i];
    }
    else if (i >= index)
    {
        new_arr[i] = arr[i+1];
    }    
  }
  delete []arr; arr = nullptr;
  arr = new_arr;
}

int main()
{
    int size = 5;
    int *arr = new int[size];
    for(int i = 0;  i<size; i++)
    {
        arr[i] = i;
    }
    delete_element(arr, size , 2 );
    return 0;
}