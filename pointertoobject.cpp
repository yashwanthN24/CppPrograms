#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        Complex()
        {
            cout <<"inside the constructor" << endl;  
        }
        Complex(int a)
        {
            cout << "The value of a is " << a << endl; 
        }
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex();
    Complex *ptr1 = new Complex(2);
    (*ptr1).setData(1, 54); 
    (*ptr1).getData();  

    // Complex *ptr2 = new Complex[4];
    // (*ptr2).setData(7 , 8);
    // (*ptr2).getData();// also can use arrow for pointera  ptr2 ->getdata(); 
    return 0;
}
