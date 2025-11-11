#include<iostream>
#define null 0
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p,*q,*r;
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
    cin>>p->data; 
    ttemp->next=p;
    p->next=temp;
}      

                            //  ADD NEW NODE AFTER GIVEN DATA
                            
void add_after_data(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
        ttemp=temp->next;
    }
    p=new node;
    cin>>p->data;
    temp->next=p;
    p->next=ttemp;
}
//                             // DELETE A NODE AFTER GIVEN DATA

void del_node_after(int x){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
        ttemp=temp->next;
    }
    p=ttemp->next;
    temp->next=p;
    p->prev=temp;
    ttemp->next=ttemp->prev=null;
    delete ttemp;
}   
                               // DELETE A NODE BEFORE GIVEN DATA
                               
void del_node_before(int x){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=ttemp->prev;
    p->next=temp;
    temp->prev=p;
    ttemp->next=ttemp->prev=null;
    delete ttemp;
}  

    //                             //  SWAP LAST AND SECOND LAST

    void swwap(){
        temp=first;
        while(temp->next!=null){
            temp=temp->next;
            ttemp=temp->prev;
            p=ttemp->prev;
        }
        p->next=temp;
        temp->prev=p;
        temp->next=ttemp;
        ttemp->prev=temp;
        ttemp->next=null;
    }  
    
    //                               //  SWAP FIRST AND SECOND
                                  
    void swap(){
        temp=first;
        ttemp=temp->next;
        q=ttemp->next;
        // while(p->next!=null){
        //     p=p->next;
        // }
        ttemp->next=temp;
        ttemp->prev=null;
        temp->prev=ttemp;
        temp->next=q;
        q->prev=temp;
        first=ttemp;
        
    }                              
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
    // cout<<"enter a node\n";
    // add_before_data(30);
    // cout<<"after adding a node before given data\n";
    // disp();
    // cout<<"enter a node\n";
    // add_after_data(30);
    // cout<<"after adding a node after given data\n";
    // disp();
    // del_node_before(40);
    // cout<<"after deleting a node before given data\n";
    // disp();
    // swwap();
    // cout<<"Ater swapping last and last second\n";
    // disp();
    swap();
    cout<<"after swapping first and second\n";   
    disp();

    return 0;
}