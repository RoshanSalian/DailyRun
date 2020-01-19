#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  vector< pair<long, long> > v;
  long min_quality=INT_MAX, min_quality_price=0;;
  for(int i=0;i<n;i++){
    long x, y;
    cin >> x >> y;
    v.push_back({x, y});
    // if(y<min_quality){
    //   min_quality = y;
    //   min_quality_price = x;
    // }
  }
  long alex=0;
  for(int i=0;i<v.size()-1;i++){
    if(alex)break;
    for(int j=i+1;j<v.size();j++){
      if(v[i].first < v[j].first && v[i].second>v[j].second){
        alex=1;
        break;
      }
      if(v[i].first > v[j].first && v[i].second<v[j].second){
        alex=1;
        break;
      }
    }
  }

  // if(n==1){
  //
  // }
  //
  // sort(v.begin(), v.end());
  //
  // long maxq = v[0].second;
  // long maxp = v[0].first;
  // int alex=0;
  // int i=0;
  // for(i=0;i<v.size();i++){
  //   if(v[i].first<min_quality_price && v[i].second>min_quality){
  //     alex=1;
  //     break;
  //   }
  // }

  if(alex){
    cout << "Happy Alex" <<endl;
  }
  else{
    cout << "Poor Alex"<< endl;
  }

}
