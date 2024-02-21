#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std ; 
void display(int arr[][20] , int row , int col)
{
    int i , j ;
    for( i = 0 ; i<row ; i++)
    {
    for( j = 0 ; j<col ; j++)
    {
        cout << setw(4) << arr[i][j] ; 
    }
     cout << " " << endl ; 

    }
    
}
int main()
{
   static  int a[20][20] , b[20][20] , c[20][20] ;
    int m1 , n1  , m2 , n2  , sum = 0 , i , j ;
   // cout << ptr; 
    cout << "Enter the number of rows of first matrix " ; 
    cin >> m1 ; 
    cout << endl << "Enter the number of col of first matrix " ;
    cin >> n1 ; 
    cout << endl << "Enter the number of rows in second matrix" ;
    cin >> m2 ; 
    cout << endl << "Enter the number of col in second matrix " ; 
    cin >> n2 ;
    if(n1 != m2 || n2 != m1 )
    {
        cout << "Matrix multiplication not possible " << endl ; 
        exit(0); 
    }
    // read matrix A
    cout << "Enter the 1st matrix " << m1 << " X "  << n1 << endl ; 
    for( i = 0 ; i< m1 ; i++)
       for( j = 0 ; j < n1 ; j++ ) 
           cin >> a[i][j] ; 
    // read matric B 
    cout << "Enter the 2nd matrix " << m2 << " X " << n2 << endl ; 
    for( i = 0 ; i< m2 ; i++ )
       for( j = 0 ; j< n2 ; j++)
         cin >> b[i][j];
   // matrix multiplication 
   if( n1==m2 )
   {
       for( i = 0 ; i<m1 ; i++)
       {
         for( j = 0 ; j<n2 ; j++ )
         {
             for( int k = 0 ; k < n1; k++ )
             {
                c[i][j]  += a[i][k]*b[k][j]; 
             }
              
         }
       }
   }
   else 
   {
       for(i = 0 ; i<m2 ; i++ )
       {
        for( j = 0 ; j<n1 ; j++ )
        {
             for( int k = 0 ; k<n2 ; k++)
             {
                sum+= a[i][k]*b[k][j];
             }
             c[i][j] = sum ;  
        }
       }
   }
   cout << "The first matrix is " << endl ; 
   display(a , m1 , n1 );
   cout << "The second matrix is " << endl ; 
   display(b, m2 , n2 ); 
   cout << "The product(resutat ) matrix is " << endl ; 
   if( n1 == m2 )
      display(c , m1 , n2);
   else
      display(c , m2 , n1 );
      return 0 ; 
}