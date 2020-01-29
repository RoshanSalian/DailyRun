#include<bits/stdc++.h>
using namespace std;
int main(){
  long a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  long arr[26]={0};
  for(long i=0;i<b;i++){
    char x;
    cin >> x;
    arr[x-'a']=1;
  }
  long pointer=-1, count=0;
  unsigned long long sum=0;
  for(long i=0;i<s.length();i++){
    if( arr[s[i]-'a']==0 ){
      unsigned long long par_sum = 0.5*count*(count+1);
      sum+=par_sum;
      count=0;
    }
    else
    count++;
  }
  unsigned long long par_sum = 0.5*count*(count+1);
  sum+=par_sum;
  cout << sum << endl;
}
