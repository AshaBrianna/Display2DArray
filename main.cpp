//Create a display of a 2 dimensional array without using pointers. Post your answer on code post.
#include<iostream>
using namespace std;
int main()
{
  int rows, columns;
  cout << "Enter No. of rows: ";
  cin >> rows;
  cout << "Enter No. of columns: ";
  cin >> columns;
  cout << endl;
  int arr[rows][columns];
  //input array elements
  for(int r=0; r<rows; r++)
  {
    for(int c=0; c<columns; c++)
    {
      cout << "Enter array element: ";
      cin >> arr[r][c];
    }
  }
  cout << endl;
  for(int r=0; r<rows; r++)
  {
    for(int c=0; c<columns; c++)
      cout << arr[r][c];
    cout << endl;
  }
  return 0;
}

// OUTPUT:

// Enter No. of rows: 3
// Enter No. of columns: 4

// Enter array element: 1
// Enter array element: 3
// Enter array element: 5
// Enter array element: 7
// Enter array element: 9
// Enter array element: 2
// Enter array element: 4
// Enter array element: 6
// Enter array element: 8
// Enter array element: 1
// Enter array element: 2
// Enter array element: 3

// 1357
// 9246
// 8123
