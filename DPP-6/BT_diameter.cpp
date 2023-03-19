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
int dia(Node* node){


int diameter =0;
int height( Node* root, int & diameter){
 if(root==NULL) return 0;
   int lh=height(root->left);
   int rh=height(root->right);
   int h= max(lh,rh)+1;
   int temp_ans= 1+lh+rh;
   diameter = max (dia,temp_ans);
   return h;
}

}

int main(){

    Node* root= new Node(10);
    root ->left= new Node(30);
    root ->right= new Node(40);
    root ->left->left = new Node(50);
    root ->left->right= new Node(20);
    root ->right->right= new Node(90);
    dia(root);

}