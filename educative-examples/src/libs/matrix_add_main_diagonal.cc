#include <iostream>

using namespace std;

// from book - add_diagonal function
int add_diagonal(int arr[3][3], int row, int col) {
  // Initialize sum
  int sum = 0;
  // Outer loop to traverse rows in a 2D array
  for (int i = 0; i < row; i++) {
    // Inner loop to traverse values in each row
    for (int j = 0; j < col; j++) {
      // Check if row index is equal to column index
      if (i == j) {
        // Add element at row index i and column index j in sum
        sum = sum + arr[i][j];
      }
    }
  }
  return sum;
}

//my logic
int add_diagonal(int arr[3][3], int row, int col) {
  int sum = 0.0;
  for(int r = 0; r < row; r++)
  {
    for(int c = r; (c < col && c < r+1); c++)
    {
        sum += arr[r][c];
    }
  }
  return sum;

}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << add_diagonal(arr, 3, 3) << endl;

    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << add_diagonal(arr1, 2, 3) << endl;
    return 0;
}