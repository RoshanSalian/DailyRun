#include<bits/stdc++.h>
using namespace std;
int main(){ //INcomplete
  long long t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    vector<string> alice, bob;
    for(int i=0;i<n;i++){
      string s;
      cin >> s;
      long vowel=0;
      for(int j=0;j<s.size();j++){
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
          vowel++;
        }
      }
      if(vowel>=s.size()){
        alice.push_back(s);
      }
      else{
        bob.push_back(s);
      }
    }
    //Input done




  }
}
