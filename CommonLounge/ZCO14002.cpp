#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  vector<long> v;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    v.push_back(x);
  }
  long sum=INT_MAX;
  long t_sum=0;
  long aux[n];

  for(int i=0;i<3;i++){
    aux[i]=v[i];
  }

  for(int i=3;i<n;i++){
    aux[i] = v[i] + min(min(aux[i-1],aux[i-2]),aux[i-3]);
  }

  cout << min(min(aux[n-1], aux[n-2]), aux[n-3])<<endl;;


}
