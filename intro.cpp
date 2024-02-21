#include<bits/stdc++.h>// this replaces all header files available in c++ with oone hreader file 
using namespace std ; 
// 10^-9 <int < 10^9 
// 10^-12 < long int or long  < 10 ^12 
// 10^-18 < long long int  or long long < 10^18  
int main()
{
    //  double  a = 100000 ; 
    //  double   b = 100000 ; 
     int a , b ; 
    cin >> a >> b ;
     long long int  c = a*1LL*b ; 
     int m = INT_MAX ;
     cout <<fixed << setprecision(0) <<   c << "  " << m+1 <<  endl;// fixed will let you print double or float dataypyes in fractional form instead of the sctific notation 
    //  setprecision(int) will set the precision of the numbers after decimal point 
    // setprecision(0) will not print any number after decimal point 

    // array declared inside the main function or inside finction can have sizw upto 10^5 only not more than 
      // as they are stored in the stack 
    // array declared in the global section can have larger size greater than 10^5 because these are placed in the text /cpde segment which has larger size and space 
}