#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr =  new int(5);
    cout<<"The value of a is "<<*(ptr)<<endl;
    delete ptr ;
    cout << "The value of a is " << *ptr  << endl ; 
    return 0;
}
