
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
};

node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return (Node);
}
void inorder(node *root, vector<int> &in)
{
    if (root == NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
vector<int> mergearrys(vector<int> &a, vector<int> &b)
{

    vector<int> ans(a.size() + b.size());
    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size())
    {

        if (a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else
        {
            ans[k++] = b[j];
            j++;
        }
    }

    while( i < a.size()){

        ans[k++] = a[i];
        i++; 
    }

    while( j < b.size()){

        ans[k++] = b[j];
        j++; 
    }

    return ans;
}
node* inordertoBST ( int s ,int e , vector<int> &in){

    if(s>e)
    return NULL;

    int mid = (s+e)/2;

    node* root = newNode( in [mid]);
    root->left = inordertoBST(s , mid-1 , in);
    root->left = inordertoBST( mid+1,e , in);

    return root;
}
node *mergeBST(node *root, node *root2)
{

    // step1 : store inorder
    vector<int> bst1, bst2;
    inorder(root, bst1);
    inorder(root2, bst2);
 // step2 :
     vector<int> mergearr = mergearrys(bst1, bst2);

    int s=0, e=mergearr.size() - 1;

    return inordertoBST(s,e,mergearr);
}
    
int main()
{
    node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);

    node *root2 = newNode(20);
    root2->left = newNode(8);
    root2->right = newNode(22);
    root2->left->left = newNode(4);
    root2->left->right = newNode(12);
    root2->left->right->left = newNode(10);
    root2->left->right->right = newNode(14);

 node* ans = mergeBST(root ,root2);
cout<< ans->data;
//  inorder(ans);
    return 0;
}
