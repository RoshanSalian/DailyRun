#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;

  cin >> t;
  while(t--){
    long long n;
    string s;
    cin >> n >> s;
    //cin >> s;
    map<pair<long, long>, long>path;
    pair<long, long> cur={0, 0};
    path[cur]=0;
    long long l=-1, r=n;
    for(int i=0;i<n;i++){
      if(s[i]=='U')cur.second++;
      else if(s[i]=='D')cur.second--;
      else if(s[i]=='R')cur.first++;
      else cur.first--;
      if(path.count(cur)){
        if(i-path[cur]+1<r-l+1){
          l = path[cur];
          r = i;
        }
      }
      path[cur]=i+1;
    }
    if(l==-1){
      cout << "-1" << endl;
    }
    else{
      cout << l+1 << " " << r+1<<endl;
    }
  }
}
