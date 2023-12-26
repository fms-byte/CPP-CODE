#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int one = 0, zero=0;
        int sz = s.size();
        string x="",y="";
        for(int i=0;i<sz;i++){//start with 0
          if(i%2==0) x+="0";
          else x+="1";
        }  
        
        for(int i=0;i<sz;i++){//start with 1
          if(i%2==0) y+="1";
          else y+="0";
        }
        
        for(int i=0;i<sz;i++){//start with 0
          if(s[i]!=x[i]) zero++;
        }  
        
        for(int i=0;i<sz;i++){//start with 1
          if(s[i]!=y[i]) one++;
        }
        
        // cout<<s<<endl;
        // cout<<x<<endl;
        // cout<<y<<endl;
        // cout<<min(one,zero)<<endl;
        // cout<<endl;
        return min(one,zero);
    }
};

int main(){
  Solution findSolution;
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int ans = findSolution.minOperations(s);
    cout<<ans<<endl;
  }
  return 0;
}