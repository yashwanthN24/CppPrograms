#include<iostream>
using namespace std;
 
float funcAverage(int a, int b){
    float  avg= (a+b)/2; 
    return avg;
}
int main(){
    float   a;
    a = funcAverage(2,2);
    cout << a ; 
    return 0;
}
