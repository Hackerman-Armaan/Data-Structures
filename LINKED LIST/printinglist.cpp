#include<iostream>
using namespace std;
class node {
public:
int data;
node*address;

//construtor
node(int data){
    this->data= data;
    this->address=NULL;

}

};
void print (node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->address;

    }
}
node* takeInput(){
int value;
cin>>value;
node*head=NULL;
node*temp=NULL;
while(value!=-1){
node *smallhead=new node(value);
if(head==NULL){
    head= smallhead;
    temp=head;
}else{
    temp->address=smallhead;
    temp=smallhead;

}
cin>>value;
}
return head;
}


int main(){
    /*node *s1=new node(636);
    node *head =s1;
    node*s2=new node(36);
    s1->address= s2;
    node*s3=new node(369);
    s2->address=s3;
    node*s4= new node(3638);
    s3->address=s4;
    print(head);*/
    node*head= takeInput();
    print(head);

        
}