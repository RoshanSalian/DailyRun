#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n, k;
  vector<long long> v;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    long long x;
    cin >> x;
    v.push_back(x);
  }
  k = k*2+1;
  sort(v.begin(), v.end());
  long long current=0, count=0;
  for(int i=0;i<n;i++){
    current = v[i] + k;
    count++;
    while(v[i]<current && i<n)
      i++;
  }
  cout << count << endl;
}
