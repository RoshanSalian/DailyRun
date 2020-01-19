#include<bits/stdc++.h>
using namespace std;


int main(){//Fails
  long money[9]={0};

  for(int i=1;i<=8;i++){
    cin >> money[i];
    sum+=money[i];
  }
  long n;
  cin >>n;
  for(int i=0;i<n;i++){
    long x, y;
    cin >> x>>y;
    v.push_back({x, y});
  }

  find(sum, 0, n);


  //cout << sum<<endl;
  // long p;
  // cin >> p;
  // while(p--){
  //   long x, y;
  //   long cut;
  //   long ind;
  //   cin >> x >> y;
  //   if(money[x]==-1 && money[y]==-1){
  //     cut=0;
  //   }
  //   if(money[x]==-1){
  //     // ind = y;
  //     // cut = money[ind];
  //     // money[ind] = -1;
  //     cut=0;
  //   }
  //   else if(money[y]==-1){
  //     // ind = y;
  //     // cut = money[ind];
  //     // money[ind] = -1;
  //     cut=0;
  //   }
  //   else{
  //     ind = (money[x]>money[y]?y:x);
  //     cut = money[ind];
  //     money[ind] = -1;
  //   }
  //   sum -=cut;
  // }
  cout << sum<<endl;
}

// 4 80 3 7 9 6 7 8
// 7
// 1 2
// 2 3
// 3 4
// 4 5
// 5 6
// 6 7
// 7 8
// 101
