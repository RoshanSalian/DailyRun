#include<bits/stdc++.h>
using namespace std;
int main(){//Done
  long n, x, y;
  cin >> n >> x >> y;
  long t;
  vector<pair<long, long>> gred;
  long a[n], b[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
    cin >> b[i];
  }

  for(int i=0;i<n;i++){
    long cut=abs(a[i]-b[i]);
    gred.push_back({cut, i});
  }

  sort(gred.begin(), gred.end(), greater<>());
  long sum=0;
  for(int i=0;i<gred.size();i++){
    // cout  << gred[i].first << " " <<  gred[i].second <<" " << x << " "  << y << endl;

    if(a[ gred[i].second ]>b[ gred[i].second ] && x || y<= 0){
      x--;
      sum+=a[gred[i].second];
      // cout << "Insdie x " << x <<endl;
    }
    else if(b[gred[i].second]>=a[gred[i].second] && y || x<=0){
      y--;
      sum+=b[gred[i].second];
      // cout << "Insdie y "<< y << endl;
    }
    else{}
    if(x==0 && y==0){break;}
    // cout << "In ther end " << x <<  " " << y <<endl;
  }
  cout << sum <<endl;
}
