#include <iostream>
#define null 0
using namespace std;
struct dcll{
    int data;
    dcll *next,*prev;
};

dcll *first,*temp,*ttemp,*p,*q;
void create_first(){
    first =new dcll;
    cin>>first->data;
    first->next=first->prev=first;

}
void Addnode(){
    temp=first->prev;
    ttemp=new dcll;
    cin>>ttemp->data;
    ttemp->next=first;
    first->prev=ttemp;
    temp->next=ttemp;
    ttemp->prev=temp;
}
void disp(){
    temp=first;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(temp!=first);
}

                  // ADD ANODE BEFORE FIRST NODE

void Add_before_first(int x){
    p=first;
    temp=p->prev;

    ttemp=new dcll;
    ttemp->data=x;
    ttemp->next=p;
    ttemp->prev=temp;
    temp->next=ttemp;
    p->prev=ttemp;
    first=ttemp;

}

                  // ADD A NODE BEFORE GIVEN DATA

void add_before_data(int x,int y){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=new dcll;
    p->data=y;
    ttemp->next=p;
    p->prev=ttemp;
    p->next=temp;
    temp->prev=p;
}  

                  // ADD A NODE AFTER GIVEN DATA

void add_after_data(int x,int y){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    ttemp=temp->next;
    p=new dcll;
    p->data=y;
    temp->next=p;
    p->prev=temp;
    p->next=ttemp;
    ttemp->prev=p;
}                  

void delete_first(){
    temp=first;
    p=first->prev;
    ttemp=first->next;

    p->next=ttemp;
    ttemp->prev=p;
    first=ttemp;
    temp->prev=temp->next=null;
    delete temp;

}
void delete_last(){
    //temp=first;
    p=first->prev;
    q=p->next;

    // q->next=temp;
    // temp->prev=q;
    // p->next=p->prev=null;
    // delete p;
    q->next=first; 
    first->prev=q;
    p->next=p->prev=null;
    delete p;
}
          // After swap last and second last
void Swap_last_secondlast(){
    temp=first;
    ttemp=temp->prev;
    q=ttemp->prev;
    p=q->prev;
    
    p->next=ttemp;
    ttemp->prev=p;
    ttemp->next=q;
    q->next=temp;
    temp->prev=q;
    q->prev=ttemp;
}

              // SWAP FIRST AND SECOND

void swap_first_second(){
    temp=first;
    ttemp=temp->prev;
    p=temp->next;
    q=p->next;

    ttemp->next=p;
    p->prev=ttemp;
    p->next=temp;
    temp->prev=p;
    q->prev=temp;
    temp->next=q;
    first=p;
}              

int main(){
    cout<<"enter the nodes\n";
    create_first();
    Addnode();
    Addnode();
    Addnode();
    Addnode();
    cout<<"doubly circular linklist are\n";
    disp();
    // cout<<"Add a node before first node\n";
    // Add_before_first(5);
    // disp();
    // cout<<"Add a node before given data\n";
    // add_before_data(40,35);
    // disp();
    // cout<<"Add a node after given data\n";
    // add_after_data(30,35);
    // disp();
    // cout<<"after delete first node\n";
    // delete_first();
    // disp();
    // cout<<"after delete last node\n";
    // delete_last();
    // disp();
    //  cout<<"after swap last and second last node\n";
    // Swap_last_secondlast();
    // disp();
    cout<<"after swap first and second node\n";
    swap_first_second();
    disp();
 return 0;
}