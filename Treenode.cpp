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
int sum(Node* root)
{
if(root==NULL)
    return 0;

return  root->data+sum(root->left)+sum(root->right);
}

void display(Node* root)
{
if(root==NULL)
    return ;
cout<<root->data<<" ";
display(root->left); 
display(root->right);
}

int size(Node* root)
{
if(root==NULL)
    return 0;
return 1+size(root->left)+size(root->right);

}
int maximum(Node* root)
{
if(root==NULL)
    return INT_MIN; 
if(root->left==NULL && root->right==NULL)
    return root->data;
int leftmax=maximum(root->left);
int rightmax=maximum(root->right);
return max(root->data,max(leftmax,rightmax));
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
display(a); 
cout<<endl;

int ans=sum(a);
cout<<ans<<endl;
int sizeoftree=size(a);
cout<<sizeoftree<<endl;
cout<<endl;
int max =maximum(a);
cout<<max<<endl;
}
