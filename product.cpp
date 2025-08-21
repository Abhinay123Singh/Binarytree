#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
public:
   int data;
Node*left;
   Node* right;
    Node(int data)
    {
        this->data=data;
        this->left= NULL;
        this->right= NULL;

    }
};
int producttree(Node* root)
{
    if(root==NULL)
        return 1;
    if(root->left==NULL && root->right==NULL)
        return root->data;
    int leftproduct=producttree(root->left);
    int rightproduct=producttree(root->right);
    root->data=leftproduct*rightproduct;
    return root->data;      
}

int main()
{
Node* a=new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(7);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
int prod=producttree(a);
cout<<prod<<endl;


}
