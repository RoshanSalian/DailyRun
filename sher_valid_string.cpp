#include<bits/stdc++.h>
using namespace std;
int main(){//Fails two
  //map<char, int> dict;
  char a[1000002];
  cin >> a;
  long arr[26]={0};
  for(long i=0;a[i]!='\0';i++){
    arr[a[i]-'a']++;
  }
  // for(int i=0;a[i]!='\0';i++){
  //   cout << arr[i] << " ";
  // }cout<<endl;
  long change=0;
  long con=1;
  map<long, long> v;
  for(long i=0;i<26;i++){
    if(arr[i])
      v[arr[i]]++;
  }
  map<long, long>::iterator itr;
  // for(itr = v.begin();itr!=v.end();itr++){
  //   cout << itr->first << " " << itr->second <<endl;
  // }
  if(v.size()==1){
    cout << "YES";
  }
  else{
    if(v.size()>2){
      cout << "NO";
    }
    else{//cout<<"a";
      long lon[2][2];
      long i=0;
      for(itr = v.begin();itr!=v.end();itr++){
        //cout << itr->first << " " << itr->second <<endl;
        lon[i][0] = itr->first;
        lon[i][1] = itr->second;
        i++;
      }
      //cout<<"b";
       //cout << lon[0][0] << " " <<  lon[1][0] << " abs " <<  lon[0][1] << " " << lon[1][1]<<endl;

      if( (lon[0][0]==1 && lon[0][1]==1) || (lon[1][0]==1 && lon[1][0]==1) ){
        cout << "YES";
      }

      else if(  abs(lon[0][0] - lon[1][0])==1 && (lon[0][1]==1  || lon[1][1]==1  ) ){//cout<<"c";
        cout << "YES";
      }
      else{//cout<<"d";
        cout << "NO";
      }
    }
  }
}
