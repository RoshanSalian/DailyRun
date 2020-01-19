//https://www.codechef.com/problems/PEPART
#include<bits/stdc++.h>
using namespace std;
int main(){//One Test Fail
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    long arr[n][n]={0};
    int flag=0;
    long celebrity=-1;
    long grand=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin >> arr[i][j];
        grand+=arr[i][j];
      }
    }
    if(grand==0){
      flag=1;
      //cout << "Already grounded" << endl;
    }
    //cout << "input donw"<<endl;
    grand=0;
    long found=0;
    long one=-1;
    if(!flag){
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          grand+=arr[j][i];
        }
        //cout << grand<<endl;
        if(grand==n-1){
          one=i;
          //cout << one << " One set"<<endl;
          break;
        }
      }
      //cout << "this one " << one << endl;
      if(one==-1){
        flag=1;
        //cout << "No celebrity found" << endl;
      }
      grand=0;
      //cout << "one found"<<endl;
      for(int j=1;j<n;j++){
        grand+=arr[one][j];
      }
      if(grand==0){found=1;}
    }
    if(flag){cout<<-1<<endl;}
    if(found){cout<<one+1<<endl;}

  }
}
