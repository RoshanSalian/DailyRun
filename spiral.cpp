//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0

#include<bits/stdc++.h>

using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    long n, m;
    cin >> n >> m;
    int arr[n][m]={0};
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin >> arr[i][j];
      }
    }
    long mul = n*m;
    long top=0;
    long bottom=n-1;
    long left=0;
    long right=m-1;
    long count=0;
    long flag=1;
    while(count<mul){
      //cout <<"\nstarting " <<left << " " <<right <<" " <<top << endl;
      if(flag==1)
      for(int i=left;i<=right;i++){
        //cout <<endl;
        //cout << "*" << arr[top][i] << " " << top << " " << i << " "<<endl;
        cout << arr[top][i] << " " ;
        count++;
        if(count==mul){flag=0;break;}
      }
      top++;
      if(flag==1)
      for(int i=top;i<=bottom;i++){//cout << "B\n";
        cout << arr[i][right] << " " ;
        count++;
        if(count==mul){flag=0;break;}
      }
      right--;
      if(flag==1)
      for(int i=right;i>=left;i--){//cout << "C\n" << right <<" " << left <<" " << bottom <<"*" <<count << "*"<<endl;;
        cout << arr[bottom][i] << " " ;
        count++;
        if(count==mul){flag=0;break;}
      }
      bottom--;
      if(flag==1)
      for(int i=bottom;i>=top;i--){//cout << "d\n";
        cout << arr[i][left]<<" " ;
        count++;
        if(count==mul){flag=0;break;}
      }
      left++;
    }
    cout<<endl;
    //cout << "Done" << count << " " << mul << " "<< "**"<< endl;
  }
}
