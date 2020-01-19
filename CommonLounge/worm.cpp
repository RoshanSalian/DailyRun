#include<bits/stdc++.h>
using namespace std;

int main(){ //Case14 CC failing
  long wr, st, en;
  cin >> wr >> st >> en;
  vector< pair<long, long> >v;
  long sta[st], ena[en];

  for(int i=0;i<wr;i++){
    long x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }
  for(int i=0;i<st;i++){
    cin >> sta[i];
  }
  for(int i=0;i<en;i++){
    cin >> ena[i];
  }
  // cout << "***"<<endl;
  sort(v.begin(), v.end());
  sort(sta, sta+st);
  sort(ena, ena+en);

  long a;
  long b;
  long min_time=INT_MAX;
  for(auto u:v){
    // cout << u.first <<" " << u.second<<endl;
    a=upper_bound(sta, sta+st, u.first)-sta;
    // a = a - sta;
    b=upper_bound(ena, ena+en, u.second-1)-ena;
    // b = b - ena;
    // cout << a-1 << " " << b<<endl;

    if(sta[a-1]>u.first || a<0){continue;}
    if(ena[b]<u.second || b>=(en) ){continue;}
    // cout << "Found: " << sta[a-1] << " " << ena[b] <<endl;

    if( ena[b]>sta[a-1] && ena[b]-sta[a-1]+1 < min_time ){
      // cout << ena[b] << " " << sta[a-1]<<endl;
      min_time=ena[b]-sta[a-1]+1;
    }

    // cout << "End of it " <<endl<<endl;
  }
  cout << min_time<<endl;

}
