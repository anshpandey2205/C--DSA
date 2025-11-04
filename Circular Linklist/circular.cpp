#include <iostream>
using namespace std;
struct SCLL
{
    int data;
    SCLL *next;
};
SCLL *temp, *first, *ttemp, *p,*q;


void create_first(int x)
{
    first=new SCLL;
    // cout<<"Enter first number ";
    // cin>>first->data;
    first->data=x;
    first->next=first;
}

void add_nodes(int x)
{
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new SCLL;
    // cout<<"Enter data ";
    // cin>>ttemp->data;
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
}
void display()
{
   temp=first;
   do{
    cout<<temp->data<<" \n";
    temp=temp->next;
   }while (temp!=first); 
}
void swap(){
    p=temp=first;
    ttemp=first->next;
    q=ttemp->next;
    while(temp->next!=first){
        temp=temp->next;
    }
    temp->next=ttemp;
    ttemp->next=p;
    p->next=q;
    first=ttemp;
}
void swap2(){
    temp=first;
    while(temp->next->next!=first){
       ttemp=temp;
       temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    p->next=temp;
    temp->next=first;
    
}
int main()
{
    create_first(10);
    add_nodes(20);
    add_nodes(30);
    add_nodes(40);
    add_nodes(50);
    display();
    // swap();
    // cout<<"After swapping first and last node\n";
    // display();
    swap2();
    cout<<"After swapping last and last second node\n";
    display();
}