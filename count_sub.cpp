//https://www.codechef.com/problems/CSUB
#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;
    char a[n];
    long b[n];
    long count=0;
    long sum=0;
    cin >> a;//cout << "Inpu";
    //cout << a;
    for(int i=0;a[i]!='\0';i++){//cout << a[i]<<endl;
      if(a[i]=='1'){
        b[i]=count;
        count++;//cout<<"count";
        sum+=count;
      }
    }
    cout << sum <<endl;
  }

}
