#include<bits/stdc++.h>
using namespace std;

bool oppositeSigns(long long x, long long y)
{
    return ((x ^ y) < 0);
}

int main(){
  long long n;
  cin >> n;
  long long a[50001];
  long long b[50001]={0};
  for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=1;
  }
  //sort(a, a+n);
  for(int i=1;i<n;i++){
    for(int j=i-1;j>=0;j--){
      //cout << abs(a[j]) << " " << abs(a[i]) << " " << a[i]*a[j] <<endl;;
      if( abs(a[j]) < abs(a[i]) && oppositeSigns(a[i], a[j]) == true ){
        //cout << "*" << endl;;
        b[i] = max(b[j]+1, b[i]);
        //break;
      }
    }
    //cout << endl;
  }
  long long maxi=0;
  for(int i=0;i<n;i++){
    maxi = max(b[i], maxi);
  }
  cout << maxi << endl;;
}
