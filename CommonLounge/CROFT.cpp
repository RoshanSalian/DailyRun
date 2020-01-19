#include<bits/stdc++.h>
using namespace std;

int main(){//Done after hints
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    long index[n+1]={0};
    vector<pair<long, long>>a, b, c;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      a.push_back({x, i});
    }
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      b.push_back({x, i});
      long yeh = x+a[i].first;
      c.push_back({yeh, i});
    }

    // sort(a.begin(), a.end(), greater<>());
    // sort(b.begin(), b.end(), greater<>());
    sort(c.begin(), c.end(), greater<>());

    long suma=0, sumb=0;
    long counta=0, countb=0;
    for(int i=0;i<n;i++){
      // if(i%2==0){//lara
      //   while( index[a[counta].second]!=0 && counta<n ){
      //     counta++;
      //   }
      //   suma += a[counta].first;
      //   index[a[counta].second]=1;
      //
      //   // cout<<"Lara selected index "<<a[counta].second<<" " << a[counta].first << endl;
      //   counta++;
      // }
      // else{
      //   while( index[b[countb].second]!=0 && countb<n ){
      //     countb++;
      //   }
      //   sumb += b[countb].first;
      //   index[b[countb].second]=1;
      //
      //   // cout<<"Johan selected index "<<b[countb].second<< " " << b[countb].first << endl;
      //   countb++;
      // }
      if(i%2==0){//lara
        suma += c[i].first - b[c[i].second].first;
      }
      else{
        sumb += c[i].first - a[c[i].second].first;
      }


    }
    // cout << "suma " << suma << " sumb" << sumb<<endl;
    if(suma>sumb)cout<<"First\n";
    else if(sumb>suma)cout<<"Second\n";
    else cout << "Tie\n";
  }
}
