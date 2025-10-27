#include<iostream>
#define null 0
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p;
void createfirst(){
    first =new node;
    cin>>first->data;
    first->next=null;
    first->prev=null;
}
void Addnode(){
    temp=first;
    while(temp->next!=null){
    temp=temp->next;
}
    ttemp=new node;
    cin>>ttemp->data;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
}
void disp(){
    temp=first;
    while(temp!=null){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
                         // ADD NEW NODE BEFORE FIRST

void Add_before_first(){
    temp=new node;
    cin>>temp->data;
    temp->prev=null;
    temp->next=first;
    first->prev=temp;
    first=temp;
}

//                          //  ADD NEW NODE BEFORE GIVEN DATA

void add_before_data(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
        ttemp=temp->prev;
    }
    p=new node;
    cin>>p->data;   // from picture
    ttemp->next=p;
    p->next=temp;
}      

//                             // DELETE A NODE AFTER GIVEN DATA

// void del_node_after(int x){
//     temp=first;
//     while(temp->data!=x){
//         temp=temp->next;
//     }
//     ttemp=temp->next;
//     p=ttemp->next;
//     temp->
// }                            
int main(){
    cout<<"enter the node\n";
    createfirst();
    Addnode();
    Addnode();
    Addnode();
    Addnode();
    Addnode();
    cout<<"doubly linklist is\n";
    disp();
    // cout<<"enter a node\n";
    // Add_before_first();
    // cout<<"after adding a node before first node\n";
    // disp();
    cout<<"enter a node\n";
    add_before_data(30);
    cout<<"after adding a node before given data\n";
    disp();
    return 0;
}