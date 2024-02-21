#include<iostream>
using namespace std ; 
#include<iomanip>
void  multiply(int (*s)[3] , int (*r)[3], int row , int col , int mul )
{
    int i ,  j ; 
    for( i = 0 ; i<row ; i++ ){
        for( j = 0 ; j<col ; j++)
        {
            r[i][j] = s[i][j]/3;
        }
    }
}
void display(int (*s)[3] , int row , int col )
{
    int i , j  ;
    for( i = 0 ; i<row ; i++)
    {
        for( j = 0 ; j<col ; j++ )
        {
            cout << setw(4) << s[i][j];
        }
        cout << endl ; 
    }
}
int main()
{
     int a[3][3] ,c[3][3], m1 , n1 , i, j , mul; 
    cout << "Enter the number of rows and columns of the matrix :" << endl ; 
    cin >> m1 >> n1 ; 
    cout << "Enter the elements of the " << m1 << "X" << n1 << endl ; 
    for( i = 0 ; i<m1 ; i++)
       for(j = 0 ; j<n1 ; j++)
          cin >> a[i][j] ; 
    cout << "Enter the integer to be multiplied to the matrix :" << endl ; 
    cin >> mul ; 
    multiply(a  , c , m1 , n1  , mul  );
    cout << "The orginal matrix is :" << endl ; 
    display(a , m1 ,n1 ); 
    cout << "The matrix after multipliaction is :" << endl ;
    display(c , m1 , n1 );
    return 0 ; 
}