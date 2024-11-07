
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
// void solve(Node *root,int dis ,int level,  map<int ,pair<int ,int >>&map){
//     if (root== NULL ){
//         return;
//     }
//  // level => vertical depth ,, dis => horizontal depth
//     solve (root->left, dis-1,level+1,map);

//     if (map.find(dis) == map.end() || map[dis].second > level){
//         map[dis]= make_pair( root->data, level);
//     }
//     // else if (map[dis].second > level)
//     //  map[dis]= make_pair( root->data, level);

//     solve (root->right, dis+1,level+1,map);
// }
// void topView(Node *root){
//  if (root== NULL ){
//         return;
//     }
//     map<int ,pair<int ,int >>map;

//     solve (root,0,0,map);

//     for(auto i : map){

//         cout<< i.second.first<< " ";
//     }
// }
   
   void topView(Node *root){
 if (root== NULL ){
        return;
    }
    map< int,int >topnode;

    queue<pair< Node* ,int> >q;
 q.push(make_pair(root, 0));
    while (!q.empty()){

        pair< Node* ,int>temp = q.front();

        q.pop();
        int hd=temp.second;
        Node* frontnode = temp.first;

        if (topnode.find (hd) == topnode.end())
        topnode[hd] = frontnode->data;

        if ( frontnode -> left)
        q.push(make_pair(frontnode->left , hd-1));
        if( frontnode -> right)
        q.push(make_pair(frontnode->right , hd+1));
    }

    for(auto val : topnode){

        cout<< val.second <<" ";
    }cout<< endl;
  }
int main()
{
    // Creating the binary tree
    // Node *root = newNode(20);
    // root->left = newNode(8);
    // root->left->left = newNode(4);
    // root->left->right = newNode(12);
    // root->left->right->left = newNode(10);
    // root->left->right->right = newNode(14);
    // root->right = newNode(22);
    // root->right->right = newNode(25);

    //   Node* root = newNode(1);
    //     root->left = newNode(2);
    //     root->right = newNode(3);
    //     root->left->right = newNode(4);
    //     root->left->right->right = newNode(5);
    //     root->left->right->right->right = newNode(6);

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->right = newNode(5);
    root->left->right = newNode(4);
    root->left->right->right = newNode(6);
    root->left->right->right->right = newNode(7);
    root->left->right->right->right->right = newNode(8);

    topView(  root);

    // Topview(root);
    return 0;
}
// 2 1 3 5 8
