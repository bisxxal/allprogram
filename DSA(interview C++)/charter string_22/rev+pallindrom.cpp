#include<bits/stdc++.h>
using namespace std;

char  uppercase(char ch){
    if (ch>='a'&&ch<='z')
    return ch;
    else{
        char temp = ch-'A'+'a';
          
        return temp ;
    }
   
}
bool chekpallin( char *name ,int n){
 int s=0,e=n-1;
        while  (s<=e){
            if (uppercase( name[s]) != uppercase( name[e]))
            return 0;
            else {
                s++;e--;
            }
        }
return 1;
}
void rev(char *name,int n){
    int s=0,e=n-1;
        while  (s<e){
            swap(name[s++],name[e--]);
        }
}
int lenght(char *name){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main( ){

char name[ 12];
cin>>name;
int len=lenght(name );
cout<< "Lenght of string is :"<< len<<endl;

rev(name ,len);
cout<< "reverse of string is :"<<name<<endl; 
if (chekpallin(name ,len))
cout<<"pallindrom "  <<endl;
 else 
 cout<< "NOt a pallindrom"<<endl;

 cout<< uppercase('A')<<endl;
 cout<< uppercase('b');
return 0;
}