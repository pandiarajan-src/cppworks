#include <iostream>

using namespace std;

void matrix_multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2 , int result[][2]) 
{
    //If 1st matrix column and 2nd matrix row doesn't match simply return empty resultant array with all -1
    if(col1 != row2)
    {
        for(int r = 0; r < row1; r++)
        {
            for(int c = 0; c < col1; c++)
            {
                result[r][c] = -1;
            }
        }
        return;
    }


    int result_row = 0;
    int result_col = 0;
    for(int r1 = 0; r1 < row1; r1++)
    {
        int sum = 0;
        for(int c2 = 0; c2 < col2; c2++){
            for(int c1 = 0; c1 < col1; c1++)
            {
                result[r1][c2] = result[r1][c2] + (arr1[r1][c1] * arr2[c1][c2]);
            }
        }
    }
    

}

void print_array(int arr1[][2], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " , ";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[2][2] = {{1, 2}, {5, 7}};
    int arr2[2][2] = {{10,20}, {-30,70}};
    int arr3[2][2];

    print_array(arr1, 2, 2);
    print_array(arr2, 2, 2);
    matrix_multiplication(arr1, 2, 2, arr2, 2, 2, arr3);
    print_array(arr3, 2, 2);

    return 0;
}