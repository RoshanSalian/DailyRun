#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;

  while(cin >> s){
    long seq1=0, seq2=0;
    for(int i=0;i<s.size();i++){
      if(i%2){//odd
        if( s[i]-'a' >=0 && s[i]-'a'<=26 ){
          seq1++;
        }
        else{
          seq2++;
        }
      }
      else{//even
        if( s[i]-'A' >=0 && s[i]-'A'<=26 ){
          seq1++;
        }
        else{
          seq2++;
        }
      }
    }
    if(seq1==s.size() || seq2==s.size()){
      cout << 0 << endl;
    }
    else{
      long t = seq1>seq2?seq1:seq2;
      cout << s.size() - t<<endl;
    }
  }

}
