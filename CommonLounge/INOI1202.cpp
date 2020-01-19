#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  long a[n], b[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=i+1;
  }

  priority_queue<long> q;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      q.push(a[j]+b[(j+i)%n]);
    }
    cout << q.top()<<" ";
  }
}
