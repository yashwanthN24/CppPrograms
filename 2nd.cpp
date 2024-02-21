#include<iostream>
using namespace std ;
class Employee 
{
     private : int a , b , c ; 
     public : int d ,c ;
    //  friend complex add(complex , complex) ;
               
};
// friend function 
//1) in  class friend function is a non member function which is is declared jn tnisde the class and defined 
// // outsside the class 
// 2) we can also make functions of other classes to access private member of other class by defining the functions as friend of other class 
// friend int calculator :: sumreal(complex , complex ); 
// 3)if we declare an entire class as friend all its function have access to the privatee memeber s of the othr class
