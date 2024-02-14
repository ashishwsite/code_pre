#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int d;
    node *next;
    node()
    {
        next = NULL;
    }
    node(int v)
    {
        d = v;
        next = NULL;
    }
};
void printnode(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ->";
        temp=temp->next;
    }
}
node* insertnode(node* head,int data){
   // node*temp=head;
    node*add=new node(data);
    add->next=head;
    head=add;
    return head;

}
node* addingendnode(node* & head,int data){
    node*add=new node(data);
    if(head==NULL){
        head=new node(data);
        return head;
    }
    else{
        node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp=add;
        return head;

    }
}

int main()
{
    // CREATION OF NODE AND PRINT OF NODE 
//     node ram(5);
//  cout<<"the data is"<<ram.d<<endl;
//  cout<<"pointer iss " <<ram.next;
node*head=NULL;
node*first=new node(6);
node* second=new node(7);
node*third=new node(11);
head=first;
first->next=second;
second->next=third;
// ADDING OF NODE IN EXIXITING NODE 
//adding at head
// head=insertnode(head,45);
//adding at tail
head=addingendnode(head,48);

printnode(head);
 
}