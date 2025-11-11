#include<iostream>
#define max 5
using namespace std;
struct stack{
    int data[max];
    int top;
};
stack s,*p;
void init(){
    p=&s;
    p->top=-1;
}
int empty(){
    if(p->top==-1)
        return 1;
    else
        return 0;
}
int full(){
    if(p->top==max-1)
        return 1;
    else
        return 0;
}
void push(int x){
    if(full()){
        return;
    }
        p->top++;
        p->data[p->top]=x;
    }
int pop(){
    int x;
    if(empty()){
        return -1;
    } else{
        x=p->data[p->top];
        p->top--;
        return x;
    }
}
    void disp(){
        for(int i=p->top;i>=0;i--){
            cout<<p->data[i]<<endl;
        }
    } 
    int main(){
        init();
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);
        disp();
        cout<<"after poping\n";
        pop();
        pop();
        disp();
     return 0;
    }

