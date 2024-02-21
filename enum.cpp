#include<iostream>
using namespace std ;
struct complex
{
    int real ; 
    int img  ; 
} ;
typedef struct complex c ; // structure is used to store a collection of different datatypes under the same name
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
    c s1 ; 
    s1.real = 4 ;
    s1.img  = -7 ; 
    cout << s1.real  << s1.img << "i" << endl ;
    enum Meal{ breakfast, lunch, dinner};
    Meal m = lunch;
    cout<<m;
    cout << (m==2);
    union money m1;
        m1.rice = 34;
        m1.car = 'A' ; 
        cout << m1.car ; 
        cout<<m1.rice;
    return 0;
}
    