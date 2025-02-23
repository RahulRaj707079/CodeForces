#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     string s,t;
     cin>>s>>t;
     int n=s.length();
     bool isRev=true;
     if(n==t.length()){
          for(int i=0;i<n;i++){
               if(s[i]!=t[n-i-1]){
                    isRev=false;
                    break;
               }
          }
          if(isRev) cout<<"YES\n";
          else cout<<"NO\n";
     } else cout<<"NO\n";
    return 0;
}