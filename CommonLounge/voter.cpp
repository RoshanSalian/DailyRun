#include<bits/stdc++.h>
using namespace std;
int main(){//Done
  long t;
  long sum=0;
  for(int i=0;i<3;i++){
    cin >> t;
    sum+=t;
  }
  vector<long>v;
  int a[1000000]={0};
  long count=0;
  long max=0;
  for(int j=0;j<sum;j++){
    long x;
    cin >> x;
    a[x]++;
    if(a[x]==2){
        count++;
        v.push_back(x);
        if(x>max)max=x;
    }
  }

  sort(v.begin(), v.end());
  cout << count <<endl;
  for(auto u:v)cout << u << endl;

}
