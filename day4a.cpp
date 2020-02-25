#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  long long n = s.length();
  for(int i=0;i<n/2;i++){
    s[i]+=s[n-1-i];
  }
  for(int i=0;i<n/2;i++){
    s[n-1-i]=s[i]-s[n-1-i];
    s[i] -= s[n-1-i];
  }

  cout << s << endl;
}
