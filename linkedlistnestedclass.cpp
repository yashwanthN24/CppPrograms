#include<iostream>
#include<iomanip>
using namespace std ; 
class LL 
{
    private :   
    class Node
    {
        
        public : 
        int data ; 
        Node* link ; 
        Node(int data)
        {
            this->data = data ; 
            this->link = NULL ; 
        }
    };
    Node *first ;
    public : 
     LL()
    {
        this->first = NULL ;
    }
    void  insertfront( int data)
    {
        Node *temp = new Node(data);
        if(first == NULL)
        {
            first = temp ;
            return ; 
        }
        temp->link = first;
        first = temp ;
    }
    void display()
    {
        if(first == NULL)
         {
            cout << "Empty list " << endl; 
            return ; 
         }
        Node *temp = first ; 
        while(temp!=NULL )
        {
            cout << temp->data << "-->" << setw(4) ; 
            temp = temp ->link ; 
        }
        cout << "NULL" << endl ;  
    }
    void insertrear(int data)
    {
        Node *temp = new Node(data);
        if(first == NULL)
          {
             first = temp ; 
             return ; 
          }
        Node *cur = first ; 
        while(cur ->link !=NULL)
        {
            cur = cur ->link ; 
        }
        cur ->link = temp ; 
    }
    void deletefront()
    {
        if(first == NULL )
        {
            cout << "List empty !Not possible to delete" << endl ; 
            return ;
        }
        Node* cur = first ;
        first = first ->link;
        cout << "The deleted item is " << cur->data << endl ; 
        delete cur ; 
    }
    void deleterear()
    {
        if(first == NULL )
        {
            cout << "List is empty ! Not possible to delete" << endl ; 
            return ; 
        }
        Node*prev = NULL ; 
        Node* cur = first ; 
        while(cur ->link !=NULL)
        {
            prev = cur ; 
            cur = cur ->link ;
        }
        cout << "The deleted item is " << cur->data << endl ;
        delete cur ;
        prev ->link = NULL ; 
    }
};

int main()
{
    LL l ;
    l.insertfront(5);
    l.insertfront(10);
    l.insertfront(15);
    l.insertfront(25);
    l.display();
    return 0 ;
}