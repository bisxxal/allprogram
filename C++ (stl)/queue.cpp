#include<bits/stdc++.h>
using namespace std;
void show (queue<string>ss){
     queue <string> str = ss;  
    while(!str.empty()){
        cout<<"\t"<<str.front();
        str.pop();
    }
cout<<endl;
}
int main( ){
  queue <string>q;                // we can use int as well as a string ex->   queue<int >str;

  q.push("ayjhefwdy");
  q.push("sedr,kjuf");
  q.push("efjtu");
  q.push("ewrjkedjmm");
  show(q);

  cout<<"size is="<<q.size()<<endl;
  cout<<"front is="<<q.front()<<endl;
  cout<<"back is="<<q.back()<<endl;
q.pop();
q.emplace("I am the second one");          ///this is to inset element in queue
    show(q);
return 0;
}