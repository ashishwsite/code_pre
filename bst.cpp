#include <iostream>
using namespace std;
// bianary tree 
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int valu)
    {
        data = valu;
        this->left = NULL;
        this->right = NULL;
    }
};
node *builtree(node *root)
{
    cout << "enter a data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    else
    {
        cout << "enter the data for left of " << data << endl;
        root->left = builtree(root->left);
        cout << "enter the data for right of " << data << endl;
        root->right = builtree(root->right);
        return root;
    }
}
void inorder(node*root){
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
    cout<<root->data<<endl;

}    
int main()
{
    node *root = NULL;
    root = builtree(root);
    //TRANSVERSAL USING INORDER LEFT ROOT RIGHT 
    inorder(root);
    return 0;
}