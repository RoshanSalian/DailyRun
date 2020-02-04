#include<bits/stdc++.h>
using namespace std;
int main(){//https://www.hackerrank.com/challenges/cloudy-day/problem
  long long n, temp;
  cin >> n;
  vector<pair<long, long>> pii;
  vector<long long> v;
  for(int i=0;i<n;i++){
    cin >> temp;
    v.push_back(temp);
  }
  for(int i=0;i<n;i++){
    cin >> temp;
    pii.push_back({temp, v[i]});
  }
  sort(pii.begin(), pii.end());
  long cc;
  cin >> c;

}
