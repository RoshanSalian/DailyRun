#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  long long maxi=0;
  long long a[n]={0}, b[n]={0}, preb[n]={0};
  for(int i=0;i<n;i++){
    cin >> a[i];
    maxi = max(a[i], maxi);
  }
  for(int i=0;i<n;i++){
    cin >> b[i];
  }
  preb[0] = b[0];
  //preb[1] = b[1];
  //preb[1] = b[1];
  for(int i=1;i<n;i++){
    preb[i] = preb[i-1]+b[i];
  }



  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=n;j++){
  //     if(i<j){
  //       maxi = max(maxi, (a[i]+a[j]+preb[j-1]-preb[i]) );
  //     }
  //     else if(i==j){
  //       maxi = max(maxi, a[i]);
  //     }
  //     else{
  //       maxi = max(maxi, a[i]+a[j]+preb[n]-preb[i]+preb[j-1]);
  //     }
  //     //cout << i <<" " << j << " " <<maxi << " "<<endl;
  //   }
  // }

  long long diff1[n]={0}, diff2[n]={0};
  diff1[0] = a[0]-preb[0];
  diff2[0] = a[0];
  for(int i=1;i<n;i++){
    diff1[i] = max(diff1[i-1], a[i]-preb[i]);
    //cout << i <<s " " << diff1[i] << endl;
  }
  for(int i=1;i<n;i++){
    maxi = max(maxi, a[i]+preb[i-1]+diff1[i-1]);
  }
  //cout << maxi << endl;


  for(int i=1;i<n;i++){
    diff2[i] = max(diff2[i-1], a[i]+preb[i-1]);
  }
  for(int i=1;i<n;i++){
    maxi = max(maxi, a[i]+preb[n-1]-preb[i]+diff2[i-1]);
  }

  cout << maxi<<endl;

}
