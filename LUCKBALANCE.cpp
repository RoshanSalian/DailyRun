#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n, k;
  cin >> n >> k;
  vector<long long> v;
  long long x, y, sum=0;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    if(y==0)sum+=x;
    else v.push_back(x);
  }
  sort(v.begin(), v.end());
  int i;
  for(i=v.size()-1;i>=0;i--){
    if(k>0){
      sum+=v[i];
      k--;
    }
    else{
      sum-=v[i];
    }
  }
  cout << sum << endl;
}
