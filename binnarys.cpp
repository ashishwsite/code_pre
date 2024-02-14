#include<iostream>
using namespace std;
// binarry tree implementation 
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;

    }

};
node* buildtree(node*root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root=new node(data);
    if (data==-1)
    return NULL;
    cout<<"insert for the left of "<<data<<"  ";
    root->left=buildtree(root->left);
    cout<<"enter the data for right of"<<data;
    root->right=buildtree(root->right);
    return root;
}
int main(){
    node*root=NULL;
    root=buildtree(root);

    return 0;
}