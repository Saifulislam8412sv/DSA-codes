#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }

};
int main(){
    Node* head;
    Node* tail;
    head=tail=NULL;
    int arr[]={12,13,14,15,1};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
           tail->next=new Node(arr[i]);
           tail=tail->next;

        }
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
}