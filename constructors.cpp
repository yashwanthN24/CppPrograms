#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex ()
    {
        cout << "Constructor called" << endl ; 
    }
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}
int main(){
    // Implicit call
    Complex a;
    a.printNumber();

    // Explicit call
    Complex b = Complex();
    b.printNumber();

    return 0;
}
