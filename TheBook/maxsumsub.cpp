#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long> vi;
typedef pair<long, long> pi;

#define F first
#define S second
#define PB push_back
#define REP(i,a, b) for(int i=a;i<b;i++)

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  //O(n^3) algorithm to go thru all sub array

  long best=0, sum=0;

  REP(i,0,n){
    sum=max(arr[i], sum+arr[i]);
    best=max(sum, best);
  }

  return 0;
}
