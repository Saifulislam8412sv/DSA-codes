#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int data){
    val=data;
    next=NULL;
  }
};
int main(){
  Node *head;
  head=NULL;
  int arr[]={12,334,4,54,89};
  for(int i=0;i<5;i++){
    if(head==NULL){
      head=new Node(arr[i]);
    }
    else{
      Node *temp;
      temp=new Node(arr[i]);
      temp->next=head;
      head=temp;
    }
  }
 Node* temp=head;
 while(temp!=NULL){
  cout<<temp->val<<" ";
  temp=temp->next;

 }

  
}