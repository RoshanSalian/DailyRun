#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    string s;
    cin >> s;
    long rep=0, ans=0;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==s[i+1]){
        rep=1;
        ans=n-1;
        break;
      }
    }

    if(!rep){
        vector<int>ch;
        for(int i=0;i<s.length();i++){
          
        }
    }

  }
}
