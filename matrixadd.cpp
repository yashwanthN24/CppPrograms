#include<iostream>
#include<stdlib.h>
#include<iomanip>
void display(int (*s)[10] , int row , int col );
using namespace std ; 
int main()
{
    int a[10][10] , b[10][10] ,  c[10][10] ; 
    int m1 , n1 , m2 , n2 , i , j ; 
    cout << "Enter the row and columsn of first matrix " << endl ; 
    cin >> m1 >> n1 ; 
    cout << "Enter the rows and columns of second mmatrix " << endl ; 
    cin >> m2 >> n2 ; 
    cout << "Enter the first matrix :" << endl  ;
    for( i = 0 ; i<m1 ; i++)
       for(j = 0 ; j<n1 ; j++)
          cin >> a[i][j] ; 
    cout << "Enter the second matrix : " << endl ; 
    for( i = 0 ; i<m2 ; i++)
       for( j = 0 ; j<n2 ; j++)
           cin >> b[i][j] ; 

    if( m1 == m2 && n1==n2 )
    {
        for(i=0 ; i<m1 ; i++)
        {
            for(j = 0 ; j<n1 ; j++)
            {
                c[i][j] = a[i][j] + b[i][j] ; 
            }
        }
    }
    else
    {
        cout << "Matrix addition not possible " << endl ; 
        exit(0); 
    }
    cout << "The first matrix is :" << endl;
    display(a, m1 , n1); 
    cout << "The second matrix is : " << endl ; 
    display(b , m2 , n2 ); 
    cout << "The sum(resultanat) matrix :" << endl; 
    display(c , m1 , n1 ); 
    return 0 ; 
}
void display(int (*s)[10], int row , int col )
{
    int i , j ; 
    for( i = 0 ; i<row ; i++ )
    {
         for( j = 0 ; j<col ; j++ )
         {
            cout << setw(4) <<  s[i][j] ;
         }
         cout <<  "  " << endl ; 
    }
}