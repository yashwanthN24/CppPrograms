#include<iostream>
#include<iomanip>
using namespace std ; 
void display(int (*s)[5]  , int row , int col ); 
void displaytranspose(int (*s)[5] , int row , int col );
int main()
{
     int a[5][5] , i , j , m1 , n1 ; 
     cout << "Enter the number of rows and columns of the matrix :" << endl ; 
     cin >> m1 >> n1 ; 
     cout << "Enter the matrix elements of a " << m1 << "X" << n1 << " Matrix :" << endl ; 
     for( i  = 0 ; i<m1 ; i++)
       for( j = 0 ; j<n1 ; j++ )
          cin >> a[i][j] ; 
     cout << "The matrix is :" << endl ; 
     display(a , m1 , n1 ); 
     cout << "The transpose of the matrix is :" << endl ; 
     displaytranspose(a, n1 , m1);
     return 0 ; 
}
void display(int (*s)[5] , int row , int col )
{
    int i , j  ; 
    for(i = 0 ; i<row ; i++ )
    {
        for(j = 0 ; j<col ; j++)
        {
            cout << setw(4) << s[i ][j] ;
        }
        cout << endl ;
    }
}
void displaytranspose(int (*s)[5] , int row , int col )
{
    int i , j  ; 
    for(i = 0 ; i<row ; i++ )
    {
        for(j = 0 ; j<col ; j++)
        {
            cout << setw(4) << s[j][i] ;
        }
        cout << endl ;
    }
}