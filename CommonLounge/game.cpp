#include<bits/stdc++.h>
using namespace std;
int main(){//One TC fail (5)
  long w, h;
  cin >> w >> h;
  long row[w]={0};
  for(int i=0;i<w;i++)cin >> row[i];
  int cmd;
  //cin >> cmd;
  vector<long>v;
  do{
    cin >> cmd;
    v.push_back(cmd);
  }while(cmd);
  long pointer=0;
  long picked=0;
  for(int i=0;i<v.size();i++){
    cmd=v[i];
    if(cmd==1){
      if(pointer){pointer--;}
    }
    else if(cmd==2){
      if(pointer!=w-1){
        pointer++;
      }
    }
    else if(cmd==3){
      if(picked==0 && row[pointer]){
        picked=1;
        row[pointer]--;
      }
    }
    else{
      if(picked==1 && row[pointer]<h){
        picked=0;
        row[pointer]++;
      }
    }
  }

  for(int i=0;i<w;i++){
    cout << row[i]<<" ";
  }
}
