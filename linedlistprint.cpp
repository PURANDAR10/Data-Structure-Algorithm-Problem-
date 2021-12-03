#include<iostream>
using namespace std;
class node{
    public:
    int data;

   node *next;
   node *head;
    node(int data){
        this->data=data;

    }
 void print(){
    //  while(head!=NULL)
    //  {
    cout<<head->data<<endl;
    cout<<&next<<endl;
    cout<<head<<endl;
    //  }
}

};

int main(){
    node n1(20);
   
 node n2(50);
    // n2.print();
    node n3(50);
    // n3.print();
    node *head;
    head=&n1;
    n1.next=&n2;
    n2.next=&n3; 
     n1.print();

}