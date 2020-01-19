#include<bits/stdc++.h>
using namespace std;

void rev(long x){//cout << "In"<<endl;
  vector<int>v;
  while(x){
    int a;
    if(x%2==1)a=1;
    else{a=0;}
    v.push_back(a);
    x/=2;
  }
  long sum=0;
  long count=v.size()-1;
  // for(int i=0;i<=v.size();i++){cout << v[i];}cout << endl;
  for(int i=0;i<=v.size();i++){
    sum+=v[i]*pow(2, count--);
    // cout << v[i] <<" ";
  }
  cout << sum<<endl;
}

int main(){
  long n;
  cin >> n;
  while(n--){
    long x;
    cin >> x;
    if(x%2==0){rev(x);}
    else{cout << x <<endl;}

  }
}
