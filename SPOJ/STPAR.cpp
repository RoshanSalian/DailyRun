#include<bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;
  while(n){
    int flag=0;
    stack<long>s;
    long count=1;
    for(int i=0;i<n;i++){
      long in;
      cin >> in;
      //cout << "I "<<in <<" ";
      if( in == count){//cout << "proper"<<endl;
        count++;
      }
      else if( !(s.empty()) && s.top()==count){
        while( !s.empty() && s.top()==count){//cout << "pop " << s.top() <<endl;
          s.pop();
          count++;
        }
        if(in==count){
          count++;
        }
        else{ //cout << " push "<< in <<endl;
          s.push(in);
        }

        /*What case is this?*/
        // if(!(s.empty()) && s.top()!=count ){cout << "new push"<<endl;
        //   // flag=1;
        //   // break;
        //   s.push(in);
        // }
      }
      else{//cout << " else push "<< in <<endl;
        s.push(in);
      }
      //cout << "end "<< count << endl;
    }
    while( !s.empty() &&  s.top()==count){ //cout << "pop " << s.top()<<endl;
      s.pop();
      count++;
    }
    // cout << "Size " << s.size()<<endl;
    if(flag || !s.empty() ){
      cout << "no"<<endl;
    }
    else{
      cout << "yes"<<endl;
    }
    cin >> n;
  }
}
