#include<bits/stdc++.h>
using namespace std;
class trienode{

    public:
    char data;
    trienode* children [26];
    bool istreminal;

    trienode(char ch){

        data =ch;
        for(int i=0;i<26 ;i++){
            children [i] = NULL;

        }
     istreminal = false;
    }
};

class trie  {
public:
    trienode* root;
     trie(){

        root = new trienode ('\0');
     }
     void insertuntil(trienode * root ,string word){
        // base case
            if(word.length() == 0)
            {
                root->istreminal = true;
                return ;
            }
        // asumentiom , word is cap A
        int index = word[0]-'A';

        trienode* child;
        // present
        if(root ->children[index] != NULL){
            child = root->children[index];
        }
        else {
            //absent
            child = new trienode(word[0]);

            root->children[index] = child;
        }
        // recursion 
        insertuntil (child , word.substr(1));

     }
    void insertword( string word){
        insertuntil(root , word);
    }

 bool searchuntil(trienode* root , string word){

    // base case 
    if(word.length() == 0)
    {
        return root->istreminal;
    }

    
     // asumentiom , word is cap A
        int index = word[0]-'A';

        trienode* child;
        // present
        if(root ->children[index] != NULL){
            child = root->children[index];
        }
        else {
            //absent
           return false;
        }
        // recursion 
       return searchuntil (child , word.substr(1));
 }
bool searchword(string word){

    return searchuntil( root , word);
}
};
int main( ){
trie *t = new trie();
t->insertword("abcd");
if(t->searchword("a"))
cout<< "Present "<<endl;
else
cout<<"NOt "<<endl;
return 0;
}