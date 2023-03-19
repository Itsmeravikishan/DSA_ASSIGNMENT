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
int height( Node* root){
   if(root==NULL)return 0;
   int lh=height(root->left);
   int rh=height(root->right);
   int result= max(lh,rh)+1;
   return result;
    
}

int main(){

    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
    cout<<height(root);

}