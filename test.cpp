#include<iostream>
using namespace std ;
int add()
{
    int a = 6 , b = 10 ; 
    int c = a + b ; 
}   // by defualt return type of any functionin c/ c++ is int 
// here not given return still working but usually when return is not given it returns A GARBAGE integer

// if value is returned from a function we can choose to ignore it 

int main()
{
    int per ;
    int arr[]  = {12 , 15 , 18 , 20 } ; 
    int (*p)[4] = &arr ; 
    cout << "Enter percentage :" << endl ; 
    cin >> per ; 
    if(per >= 60 )
       cout << "First division " << endl; 
    else if(per >= 50 )
       cout << "Second division " << endl ; 
    else if(per >= 40 )
       cout << "Third division "  << endl ; 
    else
       cout << "Fail"   << endl ; 
    cout << add()  ;
   //  int *p = NULL ; 
    cout << p << " " <<  *p << " " <<  **p << endl ; 
   //  cout << sizeof(char*);  size of all pointer varibles will be the same as they contain addresses 
    return 0 ; 
   //  the only difference that comes with a int* , float* , char* is when we defernece the value at these addresses pointed by them 
}
// recursive function calls are slower than an equivalent while/for/do-while loop 
// macros are faster but occupy space 
// but functions are slower but occupy less space 
