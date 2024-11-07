
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
// void bottomView(Node *root)
// {
//     map<int, int> m;
//     queue<pair<int, Node *>> q;
//     q.push(make_pair(0, root));
//     m[0] = root->data;
//     while (!q.empty())
//     {
//         pair<int, Node *> now = q.front();
//         q.pop();
//         m[now.first] = now.second->data;
//         if (now.second->left)
//             q.push(make_pair(now.first - 1, now.second->left));
//         if (now.second->right)
//             q.push(make_pair(now.first + 1, now.second->right));
//     }
//     for (auto x : m)
//         cout << x.second << " ";
// }
 vector <int> bottomView(Node *root) {
         vector<int> ans;
        if(root == NULL) 
        {
            return ans;
        }
        
        map<int,int> topNode;
        queue<pair<Node*, int> > q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            topNode[hd] = frontNode -> data;
                
            if(frontNode->left)
                q.push(make_pair(frontNode->left, hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right, hd+1));
        }
        
        for(auto i:topNode) 
        {
            ans.push_back(i.second);
        }
        return ans;
    }
int main()
{
 Node *root =  newNode(20);
    root->left =  newNode(8);
    root->right =  newNode(22);
    root->left->left =  newNode(5);
    root->left->right =  newNode(3);
    root->right->left =  newNode(4);
    root->right->right =  newNode(25);
    root->left->right->left =  newNode(10);
    root->left->right->right =  newNode(14);
    cout << "Bottom view of the given binary tree :\n";
   
 
      vector <int> res= bottomView(root);
     for (int i : res) cout << i << " ";
        cout << endl;

    return 0;
}
