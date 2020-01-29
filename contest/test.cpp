
#include<bits/stdc++.h>
using namespace std;

double distance(double a, double b, double c, double d){
  cout.precision(12);
  return((double)sqrtl((double)pow(c-a, 2)+(double)(pow(d-b, 2)) ));
}

int main(){
  long t;
  cin >> t;
  while(t--){
    double x, y;
    cin >> x >> y;
    long n, m, k;
    cin >> n >> m >> k;
    vector<pair<double, double>>red, green, blue;
    for(int i=0;i<n;i++){
      double a, b;
      cin >> a >> b;
      red.push_back({a, b});
    }
    for(int i=0;i<m;i++){
      double a, b;
      cin >> a >> b;
      green.push_back({a, b});
    }
    for(int i=0;i<k;i++){
      double a, b;
      cin >> a >> b;
      blue.push_back({a, b});
    }
    double min_dis=FLT_MAX;
    double help1, help2;
    // cout << "Before Loop" <<endl;
    for(int i=0;i<n;i++){
      help1 = distance(x, y,red[i].first, red[i].second);
      // if( help1<min_dis )
      for(int j=0;j<m;j++){
        help2 = distance(x, y, green[j].first, green[j].second);
        double c1 = distance(red[i].first, red[i].second, green[j].first, green[j].second);
        if(c1<min_dis && (help1<min_dis || help2<min_dis) )
        for(int q=0;q<k;q++){
          double one, two, three, four;

          one = help1+c1+distance(green[j].first, green[j].second, blue[q].first, blue[q].second);;
          two = help2+c1+distance(red[i].first, red[i].second, blue[q].first, blue[q].second);;

          min_dis = min(min(one, two), min_dis);
        }
      }
    }


    cout << fixed << setprecision(10)<< min_dis<<endl;
  }
}
