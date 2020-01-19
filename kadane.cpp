//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0/?track=md-arrays&batchId=144
#include<bits/stdc++.h>
using namespace std;

int main(){//Fails
  long t;
  cin >> t;
  while(t--){
    int max_end_here=0;
    int max_so_far=-9999;

    long n;
    cin >> n;
    long temp[n+1];
    int st[n+1];
    for(int i=0;i<n;i++){
      int x;
      cin >> x;
      st[i]=x;
    }
    long sum=0;
    //for(int i=0;i<n;i++){cout << st[i] << " ";}cout << endl;
    for(int i=0;i<n;i++){
      // max_end_here+=st[i];
      // //if(max_end_here<0){max_end_here=0;}
      // if(max_end_here>max_so_far){max_so_far=max_end_here;}
      // //cout << "max_end :" << max_end_here << " max_so_far: " << max_so_far<<endl;
      if(sum<0){sum=0;}
      sum+=st[i];
      //if(sum<0){sum=0;}
      temp[i]=sum;
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
      if(temp[i]>max){max=temp[i];}
    }
    cout << max<<endl;
  }
}
