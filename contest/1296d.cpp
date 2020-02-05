#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n, a, b, k;
  cin >> n >> a >> b >> k;
  long long arr[n];
  long long sum = a+b, count=0;
  vector<pair<long long, long long >>bad;
  for(int i=0;i<n;i++){
      cin >> arr[i];
      if(arr[i]%sum==0 || arr[i]%sum>a){
        long long remi;
        if(arr[i]%sum==0){
          remi = b;
        }
        else{
          remi = (arr[i]%sum)-b;
        }
        bad.push_back({ remi ,arr[i]});
      }
      else{
        //cout << arr[i]<<" ";
        count++;
      }
  }
  sort(bad.begin(), bad.end());
  //cout << count << " *" << endl;
  for(int i=0;i<bad.size();i++){
    //cout << bad[i].second << " " << k << endl;
    if(bad[i].second<sum){
      k++;
      while(bad[i].second>0 && k > 0){
        bad[i].second -= a;
        k--;
      }
      if(bad[i].second<=0){
        count++;
      }
    }
    else{
      long long rem = bad[i].first%sum;
      //rem = rem-a;
      while(rem>0 && k > 0){
        rem-=a;
        k--;
      }
      if(rem<=0)
      count++;
    }
  }
  cout << count << endl;
}
