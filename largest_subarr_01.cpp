//https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/?track=md-arrays&batchId=144
//Incomeplete
#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    int max_end_here=0;
    int max_so_far=0;
    long n;
    cin >> n;
    int st[n+1];
    for(int i=0;i<n;i++){
      int x;
      cin >> x;
      if(x==0)x=-1;
      st[i]=x;
    }
    for(int i=0;i<n;i++){

      max_end_here+=st[i];
      if(max_end_here<0){max_end_here=0;}
      if(max_end_here>max_so_far){max_so_far=max_end_here;}
    }
    cout << max_so_far <<endl;
  }
}
