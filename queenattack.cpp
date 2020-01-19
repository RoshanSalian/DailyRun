//https://www.hackerrank.com/challenges/queens-attack-2/problem
//Incomplete
#include<bits/stdc++.h>
using namespace std;

int main() {

  long n, o;
  cin >> n >> o;
  n--;
  int qx, qy;
  std::vector<pair<int, int>> v;
  cin >> qx >> qy;
  qy--;
  qx = n-qx+1;
  cout << qx <<" " << qy<<endl;
  for(int i=0;i<o;i++){
    int ox, oy;
    cin >> ox >> oy;
    ox = n-ox+1;
    oy--;
    cout<<ox<<" "<<oy;
    v.push_back(make_pair(ox, oy));
  }
  //conversion to matrix form

  return 0;
}
