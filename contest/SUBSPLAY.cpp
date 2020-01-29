#include<bits/stdc++.h>
using namespace std;
int main(){//Done
  long t;
  cin >> t;
  while(t--){
    long n, fur;
    cin >> n;
    string s;
    cin >> s;
    long rep=0, ans=0;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==s[i+1]){
        rep=1;
        ans = n-1;
        //cout << "dup dec " << ans << endl;
        break;
      }
    }

    if(!rep){
      //cout << "else" << endl;
      vector<long>chr[26];
      for(int i=0;i<s.length();i++){
        chr[s[i]-'a'].push_back(i);
      }
      ans=INT_MAX;

      fur=0;
      for(int i=0;i<26;i++)
        if(chr[i].size()>=2){
          fur=1;
          break;
        }


      if(fur){
        for(int i=0;i<26;i++){
          //cout << (char)(i+'a') << endl;
          if(chr[i].size()>=2)
          for(int j=1;j<chr[i].size();j++){
            ans = min(ans, chr[i][j]-chr[i][j-1]);
          }
        }
      }

    }
    if(rep){
      cout << ans << endl;
    }
    else{
      if(fur)
      cout << s.length()-ans<<endl;
      else
      cout << 0<<endl;
    }
  }
}
