#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     string s;
     cin>>s;
     int up=0,low=0;
     int n=s.length();
     for(int i=0;i<n;i++){
          if(s[i]>='A' && s[i]<='Z') up++;
          else low++;
     }
     if(up<=low){
          for(int i=0;i<n;i++){
               if(s[i]>='A' && s[i]<='Z') s[i]+=32;
          }
     }
     else {
          for(int i=0;i<n;i++){
               if(s[i]>='a' && s[i]<='z') s[i]-=32;
          }
     }
     cout<<s<<endl;
    return 0;
}