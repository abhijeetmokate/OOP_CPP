#include<iostream>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int val)
{
    node* res = new node;
    res->data = val;
    res->left = NULL;
    res->right = NULL;
    return res;
}


int main()
{

    node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(45);
    cout<<root->left->left->data;

    return 0;
}