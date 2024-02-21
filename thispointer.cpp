#include<iostream>
using namespace std ; 

class A{
    int a;
    public:
         A& setData(int a){// can also return only A setdata(int a)
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    A b ;
    a.setData(4).getData();
    b.setData(5).getData();
    return 0;
}
