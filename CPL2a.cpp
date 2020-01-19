#include<bits/stdc++.h>
using namespace std;
int main(){ //AC
  long ns,nt;
  cin >> ns >> nt;
  string s, t;
  cin >> s >> t;
  if(s==t){ //Bulls eye
    cout << "YES" << endl;
  }
  else if(ns>nt+1){ //Impossible case
    cout << "NO" << endl;
  }
  else{
    int star=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='*'){
        star=1;
        break;
      }
    }
    if(!star){ // No star
      if(s==t){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
    else{ // Star present
      int valid=1;
      for(int i=0;s[i]!='*';i++){
        if(s[i]!=t[i]){
          valid=0;
          break;
        }
      }
      int j=t.length()-1;
      for(int i=s.length()-1;s[i]!='*' && valid;i--, j--){
        if(s[i]!=t[j]){
          valid=0;
          break;
        }
      }
      if(valid){
        cout << "YES"<<endl;
      }
      else{
        cout<<"NO" << endl;
      }
    }


  }
}
