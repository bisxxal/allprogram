#include<bits/stdc++.h>
using namespace std;

class trienode
{
public:
    char data;
    trienode *children[26];
    bool istreminal;
    int childcount ;
    trienode(char ch)
    {

        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        istreminal = false;
    }
};
class trie
{
public:
    trienode *root;
    trie(char ch)
    {

        root = new trienode(ch);
    }
    void insertuntil(trienode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->istreminal = true;
            return;
        }
        // asumentiom , word is a
        int index = word[0] - 'a';

        trienode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new trienode(word[0]);
            root->childcount++;
            root->children[index] = child;
        }
        // recursion
        insertuntil(child, word.substr(1));
    }
    void insertword(string word)
    { // time is insert O(l);
        insertuntil(root, word);
    }
    
    void lcp(string str , string &ans){
        for( int i=0;i< str.length();i++){
            char ch = str[i];
            if(root->childcount == 1)
            {
                ans.push_back(ch);
                    int index  = ch -'a';
                    root = root->children[index];
            }
            else
            break;

            if(root->istreminal)
            break;
        }
    }
};


string longestcommonprefix(vector<string> &arr, int n){

    trie *t = new trie('\0');

    // insert into trie

    for(int i=0;i<n ;i++){
        t-> insertword (arr[i]);
    }

    string first = arr[0];
    string ans=" ";

    t-> lcp(first ,ans);
    return ans;
}
int main( ){
 
   trie *t = new trie( '\0' );
 
    t->insertword("geeksforgeeks");
    t->insertword("geeks");
    t->insertword("geek");
    t->insertword("geezer");

 vector<string>input={ "geeksforgeeks", "geeks", "geek", "geee r" };
        
    int n = input.size();
    cout << "The longest Common Prefix is : "  << longestcommonprefix(input, n);
       
return 0;
}