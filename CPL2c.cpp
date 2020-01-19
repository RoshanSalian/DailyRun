#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  vector<long>v;
  while(t--){
    long n;
    cin >> n;
    v.erase(v.begin(), v.end());
    for(int i=0;i<n;i++){
      long abc;
      cin >> abc;
      v.push_back(abc);
    }

    sort(v.begin(), v.end());

    if(n==1){
      cout << v[0]*v[0] << endl;
    }
    else{
      // long res = v[0]*v[v.size()-1];
      // int invalid=0;
      // for(int i=0;i<v.size();i++){
      //   if(res%v[i]!=0){
      //     invalid=1;
      //     break;
      //   }
      // }
      // if(invalid){
      //   cout << "-1" << endl;
      // }
      // else{
      //   cout << res << endl;
      // }

      long ans=v[0];
      for (int i = 1; i < n; i++)
        ans = (((v[i] * ans)) /
                (__gcd(v[i], ans)));

      cout << ans << endl;
    }



  }
}
