#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long n;
    cin >> n;

    long holder[n+3]={0};
    long last[n+3]={0};
    long count[n+3]={0};
    long seclast[n+3]={0};

    holder[1]=0;
    count[0]=1;
    last[0]=1;

    for(int i=2;i<=n;i++){
      long prev=holder[i-1];
      if(count[prev]==1){
        holder[i]=0;
        count[holder[i]]++;
        seclast[holder[i]]=last[holder[i]];
        last[holder[i]]=i;
      }
      else{
        holder[i] = last[holder[i-1]]-seclast[holder[i-1]];
        count[holder[i]]++;
        seclast[holder[i]]=last[holder[i]];
        last[holder[i]]=i;
      }
      // for(int j=1;j<=i;j++)cout << holder[j]<<" ";cout<<endl;
      // cout << "Count: " << holder[i] <<" " <<count[holder[i]]<<endl;
    }
    cout << count[holder[n]] << endl;

    // holder[1]=0;
    // count[0]=1;
    // last[0]=1;
    // if(n==1){
    //   // cout
    // }
    // else
    // for(int i=1;i<=n;i++){
    //   // cout << "for :" << holder[i]<<endl;;
    //   if(count[holder[i]]==1){
    //     holder[i+1]=0;
    //     count[holder[i+1]]++;
    //     seclast[holder[i+1]]=last[holder[i+1]];
    //     last[holder[i+1]]=i+1;
    //   }
    //   else{
    //     holder[i+1]=last[holder[i]]-seclast[holder[i]];
    //     count[holder[i+1]]++;
    //     seclast[holder[i+1]]=last[holder[i+1]];
    //     last[holder[i+1]]=i+1;
    //
    //   }
    //
    //   // for(int j=1;j<=i;j++)cout << holder[j]<<" ";cout<<endl;
    //
    // }
    // // cout << "Element querying is: "<< holder[n] <<" " << count[holder[n]]<<endl;
    // cout << count[holder[n]] << endl;
  }
}
