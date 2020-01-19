#include<bits/stdc++.h>
using namespace std;

int main(){
  long t;
  cin >> t;
  for(int i=0;i<t;i++){

    long need, fri;
    long index=-1;
    cin >> need >> fri;
    long sum=0;
    long st[fri];
    long tem[fri];
    for(int i=0;i<fri;i++){
      cin >> st[i];
      sum+= st[i];
      // tem[i]=sum;
    }
    long ppl=0;
    cout << "Scenario #" <<i+1<<":"<<endl;
    if(sum < need){//cout<<"1"<<endl;
      cout << "impossible"<<endl<<endl;;
    }
    else if(sum==need){//cout<<"2"<<endl;
      cout << fri << endl<<endl; ;
    }
    else{//cout<<"3"<<endl;
      sort(st, st+fri);
      long temp=0;

      index=-1;
      for(int i=fri-1;i>=0;i--){
        temp+=st[i];
        ppl++;
        // cout << "temp: " << temp<<endl;
        if(temp>=need){
          break;
        }

      }
      cout << ppl<<endl<<endl;
    }

  }
}
