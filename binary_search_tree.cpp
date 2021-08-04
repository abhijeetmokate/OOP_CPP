#include<iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* NewBSTNode(int val)
{
    BSTNode* node = new BSTNode;
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

BSTNode* insert(BSTNode* root,int val)
{

    if(root==NULL)
    {
        cout<<"\nroot\n";
        root = NewBSTNode(val);
    }
    else if(val<root->data)
    {
        cout<<endl<<"left"<<endl;
        root->left = insert(root->left,val);
    }
    else if(val>root->data)
    {
        cout<<endl<<"right"<<endl;
        root->right = insert(root->right,val);
    }
    
    return root;

}


void insert2(BSTNode** root, int val)
{
    if(*root == NULL)
    {
        *root = NewBSTNode(val);
    }
    else if(val<(*root)->data)
    {
        insert2(&((*root)->left),val);
    }
    else if(val>(*root)->data)
    {
        insert2(&(*root)->right,val);
    }
}

BSTNode* find(BSTNode *root, int value)
{
    while (root->data!=value)
    {
        if(root->data<value)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }

    return root;
    
}

BSTNode* find2(BSTNode* root, int value)  //recursive method
{
    if(root == NULL||root->data == value)
    return root;

    if(value<root->data)
    find2(root->left,value);
    else
    find2(root->right,value);
}


int main()
{
    // BSTNode* root = NULL;
    // cout<<"start";
    // root = insert(root,10);
    // root = insert(root,9);
    // root = insert(root,15);
    // root = insert(root,4);
    // root =  insert(root,13);

    // cout<<root->left->left->data;

    // cout<<"done";

     cout<<"\ninsert 2\n";

    BSTNode* BT = NULL;

    insert2(&BT,12);
    insert2(&BT,11);
    insert2(&BT,15);
    insert2(&BT,9);
    insert2(&BT,17);

    cout<<endl<<BT->left->left->data<<endl;

     BSTNode* result = find(BT,15);
     cout<<endl<<result->data<<endl<<result->right->data<<endl;

     result = find2(BT,11);
     cout<<endl<<result->data<<endl<<result->left->data<<endl;

     cout<<"\ninsert2-done\n";

    return 0;
}