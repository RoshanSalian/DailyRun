#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long t;
  cin >> t;
  while(t--){
    priority_queue<long>big;
    priority_queue<long>small;
    big.push(INT_MIN);
    small.push(INT_MIN);
    stack<long>s;
    long x;
    cin >> x;

    long med;
    while(x){


      if(x==-1){
        cout << "Top of big " << big.top() <<" Top of small "<<small.top()<<endl;
      }
      else{
        if(x>big.top()){
          big.push(x);
        }
        else{
          small.push(-1*x);
        }

        if(big.size()-small.size()==2){
          small.push(big.top()*-1);
          big.pop();
        }
        else if(small.size()-big.size()==2){
          big.push( small.top()<0?small.top()*-1:small.top() );
          small.pop();
        }
        else{}
      }

      cout << "Start "<<endl;
      cout << big.top() << endl;
      cout << small.top() << endl;
      cin >> x;
    }
  }
}
