#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<long, long>& v1, const pair<long, long>& v2){
  return (v1.second>v2.second);
}

int main(){//Did not understand logic
  long n;
  cin >> n;
  long a, b, c, sum=0;
  vector<pair<long, long>>v;
  for(int i=0;i<n;i++){
    sum=0;
    long first=0;
    for(int j=0;j<3;j++){
      cin >> a;
      if(j==0)first = a;
      if(j==1 || j==2){
        sum+= a;
      }
      // first=a;
      // sum+=a;
    }
    v.push_back({first, sum});
  }


  sort(v.begin(), v.end(), compare);

  vector<long>maxer;
  long x, y=0;
  for(auto u:v){
    // cout << u.first << " " << u.second <<endl;

    maxer.push_back(y+u.second+u.first);
    y+=u.first;
  }

  // for(auto u:maxer){cout << u << " ";}cout <<endl;
  //
  long maxi=INT_MIN;
  for(auto u:maxer){
    // cout << u << " ";
    if(u>maxi){maxi=u;}
  }
  cout << maxi;

}


/*
#include <bits/stdc++.h>
using namespace std;
struct data {
	int a,b,c;
	int sum;
};
bool cmp(data a1, data b1) {
	return a1.sum > b1.sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<data> v(n);
	int x,y,z;
	for(int i=0;i<n;i++) {
		cin>>v[i].a>>v[i].b>>v[i].c;
		v[i].sum = v[i].b+v[i].c;
	}
	sort(v.begin(),v.end(),cmp);
	int ans = v[0].a+v[0].sum;
	int prev = v[0].a;
	for(int i=1;i<n;i++) {
		ans = max(ans,prev + v[i].a + v[i].sum);
		prev += v[i].a;
	}
	cout<<ans;
	return 0;
}
*/
