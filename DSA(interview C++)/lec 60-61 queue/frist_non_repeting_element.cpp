#include<bits/stdc++.h>
using namespace std;
class solutioin {
    public:

    string FirstNonRepeating ( string A){
        unordered_map<char ,int >count;

        queue <int >q;

        string ans="";

        for(int i=0;i<A.length();i++){
            char ch= A[i];

            //increase count
            count[ch]++;
            // push into in queue
            q.push(ch);

            while(!q.empty()){
                if (count [q.front()]>1){
                    //repenting element 
                    q.pop();
                }
                else 
                {
                    // non repeting element 
                    ans.push_back(q.front());
                    break;
                }
            }

            if(q.empty()){
                ans.push_back('#');
            }                
        }
return  ans;
    }
};
int main( ){
 solutioin obj;

    string A = "aaabccdefghj";
    string ans = obj.FirstNonRepeating(A);
    cout << ans << "\n";
 
return 0;
}