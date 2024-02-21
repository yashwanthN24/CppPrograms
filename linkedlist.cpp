#include<iostream>
using namespace std ;
class Node
{
    public :int data ;
    Node* link ;
    
    Node(int data)
    {
        this->data = data ; 
        this->link = NULL ;
    }

};
class LL 
{
    private : Node* first ;
    
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
            cout << temp->data << endl ; 
            temp = temp ->link ; 
        }
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
    l.display();
    l.insertfront(12);
    l.insertfront(24);
    l.insertfront(37);
    l.insertfront(78);
    l.deletefront();
    l.deletefront();
    l.deletefront();
    l.insertrear(12);
    l.insertrear(22);
    l.insertrear(42);
    l.insertrear(52);
    l.insertrear(62);
    l.deleterear();
    l.display();
    return 0 ; 
}


