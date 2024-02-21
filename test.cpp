#include<iostream>
using namespace std ; 
int main()
{ 
    int n = 2 , m = 0  ; 
    while(n>0)
    {
        int   m = n ; 
        n-- ;
        cout << m  << endl; 
        // the m in this loop is dead 
    }
    cout << m << endl ; 
    // this m is the one deckared outside of the loop 
}