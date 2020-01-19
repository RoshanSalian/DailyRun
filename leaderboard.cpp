//6
//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
#include<bits/stdc++.h>

using namespace std;

int bin(long alice, long scores[], long start, long end){
  while(start<=end){
      int mid = (start+end)/2;
      //cout<<mid << "mid" << endl;
      if(alice<scores[mid]){
        start = mid+1;
      }
      else if(alice>scores[mid]){
        end = mid-1;
      }
      else{
        //cout<<"found"<<endl;
        return mid;
      }
  }
  if(start>end){//cout << "Rejct " << start <<endl;
    //cout<<"nf "<<end<<endl;
    return start;
  }
}

int main(){
  long n, m, alice;
  cin >> n ;
  long rank[200006]={0};
  long scores[200006]={0};
  long counter=1;
  long max=-1;
  for(int i=1;i<=n;i++){
    long x;
    cin >> x;
    if(scores[counter-1]!=x){
      scores[counter++]=x;
    }
    if(x>max){max=x;}
  }

  //for(int i=1;i<counter;i++){cout << scores[i] << " ";}cout << endl;
   cin >> m;
   long pos;
   for(int i=0;i<m;i++){
     cin >> alice;
     if(alice>scores[1]){cout << 1 << endl;}
     else if(alice<scores[counter-1]){cout<<counter<<endl;}
     else{
       pos = bin(alice, scores, 1, (counter-1) );
       cout<< pos <<endl;
     }
   }


}
