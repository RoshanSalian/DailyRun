#include<bits/stdc++.h>
using namespace std;

int main(){
  long n, q;
  cin >> n >> q;
  std::vector<long> v;
  for(int i=0;i<n;i++){
    long x;
    cin >> x;
    v.push_back(x);
  }
  vector<long>res;
  for(int i=0;i<v.size();i++){
    long temp=v[i];
    while(temp){
      res.push_back(temp);
      temp/=2;
    }
  }

  sort(res.begin(), res.end(), greater<>());
  
  while(q--){
    long index;
    cin >> index;
    cout << res[index-1]<<endl;
  }

}
