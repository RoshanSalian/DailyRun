#include<bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input03.txt", "r", stdin);
  long long n, k;
  cin >> n >> k;
  long long a[n]={0};
  long long flag2=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i]==1){
      flag2=1;
    }
  }
  if(flag2==0){
    cout << -1 << endl;
  }
  else if(k>=n && flag2){
    cout << 1 << endl;
  }
  else{
    long long i=0, j=0, ki=0, count=0;
    long long limit=0;
    int flag=0, flag1=0;
    while(i<n){
      ki=i;
      j = i + k-1;
      //if(j>=n)break;
      flag=0;
      if(ki-k+1>=0){
        limit = ki-k+1;
      }
      else{
        limit = ki;
      }

      while(j>=limit){
        if(a[j]==1){
          i = j+k;
          flag=1;
          count++;
          break;
        }
        j--;
        if(i>=n){
          flag1=1;
          break;
        }
      }
      if(flag==0){
        flag1=1;
        break;
      }
    }
    if(flag1){
      cout << -1 << endl;
    }
    else{
      cout << count << endl;
    }
  }

}
