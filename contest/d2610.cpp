#include<bits/stdc++.h>
using namespace std;
int main(){
  long n, k;
  cin >> n >> k;
  double a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  long count=0;
  for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++){
    // cout << pow((float)a[i], (float)1/k)<<endl;
    // cout << pow((float)a[i], (float)1/k)<<" " << pow((float)a[j], (float)1/k) <<" " << ceil(pow((float)a[i], (float)1/k)*pow(a[j], (float)1/k)) << " " << i+1 << " " << j+1 <<endl;
    if(pow((float)a[i], (float)1/k)*pow((float)a[j], (float)1/k)  == ceil(pow((float)a[i], (float)1/k)*pow(a[j], (float)1/k))){
      // cout << (float)pow((float)a[i], 1/k)*pow((float)a[j], 1/k) << endl;
      // cout << i+1 << " " << j+1<<endl;
      count++;
    }
  }
  cout << count<<endl;
}
