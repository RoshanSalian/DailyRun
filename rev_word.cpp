//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0/?track=md-string&batchId=144
#include<bits/stdc++.h>
using namespace std;

int main(){
  //vector<string>v;
  long t;
  cin >> t;
  while(t--){
    char a[2000], b[200][100];
    cin >> a;
    long count=0, alpha=0;
    for(int i=0;a[i]!='\0';i++){
      if(a[i]=='.' ){
        // v[count][alpha]='\0';
        // count++;
        // alpha=0;
        b[count][alpha]='\0';
        count++;
        alpha=0;
      }
      // v[count][alpha++]=a[i];
      else{
          b[count][alpha++]=a[i];
          //cout << "Adding "<< a[i] << " " << count <<" " << alpha-1 <<endl;
      }

    }
    b[count][alpha]='\0';
    //cout << count <<endl;

    for(int i=count;i>=0;i--){
      for(int j=0;b[i][j]!='\0';j++){
        cout<<b[i][j];
      }
        if(i>0)cout << ".";
    }
    cout << endl;
  }
}
