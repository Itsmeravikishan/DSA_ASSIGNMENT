#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    // constructor
    Node (int val){
        data = val;
        left=right=NULL;
    }
};
void preOrder( Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
preOrder(root->left);
preOrder(root->right);

    }
}

int main(){
    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
    preOrder(root);

}