#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;;
    cin >> n;
    long a[n+1];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    sort(a, a+n);
    long pi = n/4;
    if( a[pi] == a[pi-1] || a[2*pi] == a[2*pi-1] || a[3*pi] == a[3*pi-1]  )
      cout << "-1 " << endl;
    else
      cout << a[pi] << " " << a[2*pi] << " " << a[3*pi]<<" "<< endl;
  }
}
