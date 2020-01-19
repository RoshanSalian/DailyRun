
#include<bits/stdc++.h>

using namespace std;

int main(){
  long t;
  cin >> t;
  while(t--){
    vector<pair<long, long>>vi;
    long age[3]={0};
    long num=3;
    long sweet[3]={0};
    for(int i=0;i<3;i++){
      //long age;
      cin >> age[i];
      //arr[age]++;
    }
    //sort(age, age+3);
    int flag=0;
    long h=3;
    for(int i=0;i<3;i++){
      cin >> sweet[i];
      vi.push_back({age[i], sweet[i]});
    }

    sort(vi.begin(), vi.end());

    //for(int u=0;u<vi.size();u++){cout << vi[u].first << " " << vi[u].second<<endl;}

    for(int i=1;i<vi.size();i++){
      if(vi[i].first == vi[i-1].first && vi[i].second != vi[i-1].second){flag=1;break;}
      if(vi[i-1].first < vi[i].first && vi[i-1].second >= vi[i].second){flag=1;break;}
    }

    if(flag)cout << "NOT FAIR" <<endl;
    else cout << "FAIR" <<endl;
  }
}

/*
1 19
2 90


*/
