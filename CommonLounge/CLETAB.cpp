#include<bits/stdc++.h>

using namespace std;

int main(){//Otimal page replacement. Did not solve
  long t;
  cin >> t;
  while(t--){
    long n,m;
    int cust[401]={0};
    cin >> n >> m;
    long order[m+1];
    long table[n+1]={0};

    for(int i=0;i<m;i++){
      long x;
      cin >> x;
      cust[x]++;
      order[i]=x;
    }
    long empty=3, count=0;
    for(int i=0;i<m;i++){
      if(empty)
      for(int j=0;j<n;j++){
        if(table[j]==0){
          empty--;
          table[j]=order[i];
          count++;
        }
      }
      else{

      }

    }






  }
}
