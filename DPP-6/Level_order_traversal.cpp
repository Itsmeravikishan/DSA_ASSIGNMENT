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
void printLevel( Node* root){
   if(root==NULL)return ;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *node=q.front();
        q.pop();
        cout<<node->data<<" ";
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
}
}

int main(){

    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
    printLevel(root);

}