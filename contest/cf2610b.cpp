#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n, k, d;
    cin >> n >> k >> d;

    // long a[n+1];
    // for(int i=0;i<n;i++){
    //   cin >> a[i];
    // }
    //
    // long count=INT_MAX;
    // set <long> se;
    // for(int i=0;i<n-d+1;i++){
    //
    //   for(int j=i;j<i+d;j++){//Each in set of d
    //     se.insert(a[j]);
    //   }
    //   // cout << se.size() <<endl;
    //   if(count>se.size()){
    //     count = se.size();
    //   }
    //   se.clear();
    // }

    map<long, long>counter;
    set<long>uni;
    long count=0;
    long a[n]={0};
    for(int i=0;i<d;i++){
      cin >> a[i];
      // if(counter[a[i]]==0)count++;
      counter[a[i]]++;
      uni.insert(a[i]);
    }
    count = uni.size();

    for(int i=d;i<n;i++){
      cin >> a[i];
      if(counter[a[i-d]]==1){
        uni.erase(a[i-d]);
      }
      counter[a[i-d]]--;
      if(counter[a[i]]==0){
        uni.insert(a[i]);
      }
      counter[a[i]]++;
      count = min(count, (long)uni.size());
      // cout << "Count: " << count<<endl;
    }

    cout << count<<endl;
  }
}
