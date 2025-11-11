#include <iostream>
using namespace std;
#define null 0
struct SCLL{
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

             // ADD A NODE BEFORE FIRST NODE

void Add_before_first(int x){ 
    p=temp=first;
    ttemp=new SCLL;
    ttemp->data=x;
    while(temp->next!=first){
        temp=temp->next;
    }
    temp->next=ttemp;
    ttemp->next=p;
    first=ttemp;
}

            // ADDING NEW NODE AFTER GIVEN DATA

void add_after_data(int x,int y){
     ttemp=first;
     while(ttemp->data!=x){
        ttemp=ttemp->next;
        temp=ttemp->next;
        
     }
     p=new SCLL;
     p->data=y;
     p->next=temp;
     ttemp->next=p;
}

            // DELETE FIRST NODE
void delete_first(){
    ttemp=first;
    p=ttemp->next;
    while(temp->next!=first){
        temp=temp->next;
    }
    temp->next=p;
    first=p;
    ttemp->next=null;
    delete ttemp;
}

            // DELETE LAST NODE
void delete_last(){
    temp=first;
    while(temp->next!=first){
        ttemp=temp;
        temp=temp->next;
    }
    ttemp->next=first;
    ttemp->next=null;
    delete temp;
}

            // DELETE NODE BEFORE GIVEN DATA
void delete_before_data(int x){
    temp=first;
    while(temp->next->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    temp->next=null;
    delete temp;
}

             // DELETE A NODE AFTER A GIVEN DATA

void delete_after_data(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    ttemp=temp->next;
    p=ttemp->next;
    temp->next=p;
    ttemp->next=null;
    delete ttemp;
}  

             // DELETE NTH NODE

void delete_nth(int x){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    temp->next=null;
    delete temp;
}             
             // TO SWAP FIRST AND SECOND NODE
             
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
   
               // TO SWAP LAST AND SECOND LAST

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
    //  Add_before_first(5);
    // cout<<"Adding new node before first node \n";
    // display();
    // add_after_data(30,35);
    // cout<<"Adding new node before first node \n";
    // display();
    //  delete_first();
    // cout<<"After delteing first node \n";
    // display();
    // delete_last();
    // cout<<"After delteing last node \n";
    // display();
    // delete_before_data(40);
    // cout<<"After deleting node before given data \n";
    // display();
    // delete_after_data(30);
    // cout<<"After deleting node after given data \n";
    // display();
    // delete_nth(30);
    // cout<<"After deleting nth node \n";
    // display();
    // swap();
    // cout<<"After swapping first and second node\n";
    // display();
    swap2();
    cout<<"After swapping last and last second node\n";
    display();
}