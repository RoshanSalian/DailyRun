#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    priority_queue<long long, vector<long long>, greater<long long> > q;
    long n;
    cin >> n;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      q.push(x);
    }
    long long sum=0;
    while(q.size()>1){
      long long a = q.top();
      q.pop();
      long long b = q.top();
      q.pop();
      sum += (a+b);
      q.push(a+b);
    }
    cout << sum <<endl;
  }

}
