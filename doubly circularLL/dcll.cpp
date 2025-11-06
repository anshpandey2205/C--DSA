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

void Add_before_first(){

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
    temp=first;
    p=temp->prev;
    q=p->next;

    q->next=temp;
    temp->prev=q;
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

int main(){
    cout<<"enter the nodes\n";
    create_first();
    Addnode();
    Addnode();
    Addnode();
    Addnode();
    cout<<"doubly circular linklist are\n";
    disp();
    // cout<<"after delete first node\n";
    // delete_first();
    // disp();
    // cout<<"after delete last node\n";
    // delete_last();
    // disp();
     cout<<"after swap last and second last node\n";
    Swap_last_secondlast();
    disp();

}