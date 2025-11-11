#include<iostream>
#define null 0
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,*ntemp;
void init(){
    first =temp=ttemp=null;
}
void createfirst(int val){
    first=new Node;
    first->data=val;
    first->next=null;
}
void Addnode(int val){
    temp=first;
    while(temp->next!=null){
        temp=temp->next;
    }
    ttemp=new Node;
    ttemp->data=val;
    ttemp->next=null;
    temp->next=ttemp;
}
void disp(){
    temp=first;
    while(temp!=null){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
            //  TO ADD NEW NODE AFTER 30 

void Add_after(int x,int y){
    temp=first;
    while (temp->data!=x){
    temp=temp->next;
    ttemp=temp->next;
    }
    p=new Node;
    p->data=y;
    p->next=ttemp;
    temp->next=p;
    
}
             //  TO ADD NEW NODE BEFORE 50

void Add_before(int x,int y){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=new Node;
    p->data=y;
    p->next=temp;
    ttemp->next=p;
}
              // ADD A NEW NODE BEFORE FIRST NODE
void Add_before_first(int x){
    temp=new Node;
    temp->data=x;
    temp->next=first;
    first=temp;
}
void  Add_before_last(int x){
    temp=first;
    while(temp->next!=null){
        ttemp=temp;
        temp=temp->next;
    }
    p=new Node;
    p->data=x;
    p->next=temp;
    ttemp->next=p;
} 
          //  TO DELETE FIRST NODE

void Delete_first(){
    temp=first;
    first=first->next;
    temp->next=null;
    delete temp;
}  
           //  TO DELETE A NODE AFTER GIVEN DATA

void del_after_data(int x){
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
             // TO DELETE A NODE BEFORE THE GIVEN DATA

void del_before_data(int x){
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
               // TO DELETE LAST SECOND NODE
void del_sec_last() {
    temp=first;
    while(temp->next->next!=null){
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    temp->next=null;
    delete temp;
} 
                // TO DELETE Nth NODE  
// void del_nth(int x){
//     temp=first;
//     while(temp->next!=x){
//         ttemp=temp;
//         temp=temp->next;
//     }
// }
                // TO SWAP FIRST AND LAST

    void swap_first_last(){
        q=temp=first;
        p=first->next;
        while(temp->data!=null){
            ttemp=temp;
            temp=temp->next;
        }
        temp->next=p;
        ttemp->next=q;
        q->next=null;
        first=temp;
    }            

int main(){
    init();
    createfirst(10);
    Addnode(20);
    Addnode(30);
    Addnode(40);
    Addnode(50);
    Addnode(60);
    disp();
//     cout<<"After add new Node\n";
//     Add_after(30,80);
//    disp();
//     cout<<"Before add new Node\n";
//     Add_before(50,70);
//     disp();
    // cout<<" add new Node before first node\n";
    // Add_before_first(90);
    // disp();
//     cout<<" add new Node before last node\n";
//     Add_before_last(90);
//     disp();
//     cout<<" after delete first node\n";
//     Delete_first();
//     disp();
//     cout<<" after delete node is= \n";
//     del_after_data(30);
//     disp();
//     cout<<" delete before given data= \n";
//     del_before_data(50);
//     disp();
//     cout<<" delete second last= \n";
//     del_sec_last();
//     disp();
    // cout<<" Swap = \n";
    // swap();
    // disp();
    cout<<" Swap = \n";
    swap_first_last();
    disp();

    return 0;
}