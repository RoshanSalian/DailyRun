#include<bits/stdc++.h>

using namespace std;

int main(){
  long games;
  long x, y, sx, sy;
  cin >> games;
  sx=0;
  sy=0;
  long leadx, leady;
  leadx=-1;
  leady=-1;
  while(games--){
    cin >> x >> y;
    long inter;
    sx+=x;
    sy+=y;

    if(sx-sy>0){//what if equal
      if(abs(sx-sy)>leadx){
        leadx=abs(sx-sy);
      }
    }
    else{
      if(abs(abs(sy-sx)>leady))
        leady=abs(sx-sy);
    }
  }
  if(leadx>leady){
    cout << 1 << " " << leadx;
  }
  else{
    cout << 2 << " " << leady;
  }
}
