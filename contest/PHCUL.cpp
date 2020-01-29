#include<bits/stdc++.h>
using namespace std;

double distance(double a, double b, double c, double d){
  cout.precision(12);
  return((double)sqrtl((double)pow(c-a, 2)+(double)(pow(d-b, 2)) ));
}

// int main(){//WA
//   double t;
//   cout.precision(11);
//   cin >> t;
//   while(t--){
//     vector<pair<double, double>>red, green, blue;
//     double s_x, s_y;
//     cin >> s_x >> s_y;
//     double n, m, k;
//     cin >> n >> m >> k;
//     // double ax[n], ay[n], bx[m], by[m], cx[k], cy[k];
//     double x, y;
//     for(int i=0;i<n;i++){
//       cin >> x >> y;
//       red.push_back({x, y});
//     }
//
//     for(int i=0;i<m;i++){
//       cin >> x >> y;
//       green.push_back({x, y});
//     }
//
//     for(int i=0;i<k;i++){
//       cin >> x >>y;
//       blue.push_back({x, y});
//     }
//
//     vector<double>red_dist;
//     vector<double>green_dist;
//
//     pair<double, double> red_best, green_best;
//
//     double min_r=DBL_MAX, min_g=DBL_MAX;
//     for(int i=0;i<n;i++){
//       red_dist.push_back(distance(s_x, s_y, red[i].first, red[i].second));
//       if(min_r > distance(s_x, s_y, red[i].first, red[i].second)){
//         min_r = distance(s_x, s_y, red[i].first, red[i].second);
//         red_best = {red[i].first, red[i].second};
//       }
//     }
//     // cout << "Min red: " << min_r << endl;
//
//
//     for(int i=0;i<m;i++){
//       green_dist.push_back(distance(s_x, s_y, green[i].first, green[i].second));
//       if(min_g > distance(s_x, s_y, green[i].first, green[i].second)){
//         min_g = distance(s_x, s_y, green[i].first, green[i].second);
//         green_best = {green[i].first, green[i].second};
//       }
//     }
//     // cout << "Min green: " << min_g<< endl;
//     double disop=FLT_MAX;
//     double disop2=FLT_MAX;
//     pair<double, double> disop_p1;
//     pair<double, double> disop_p2;
//     pair<double, double> disop_pp;
//     for(int i=0;i<n;i++){
//       if(disop>distance(green_best.first, green_best.second, red[i].first, red[i].second)){
//         disop = distance(green_best.first, green_best.second, red[i].first, red[i].second);
//         disop_p1 = {red[i].first, red[i].second};
//       }
//     }
//     // cout << "Red: " << disop << endl;
//
//     for(int i=0;i<m;i++){
//       if(disop2>distance(red_best.first, red_best.second, green[i].first, green[i].second)){
//         disop2 = distance(red_best.first, red_best.second, green[i].first, green[i].second);
//         disop_p2 = {green[i].first, green[i].second};
//       }
//     }
//     // cout << "Green: " <<disop2<< endl;
//     // double upto;
//     // if(min_g+disop < min_r+disop2){
//     //   disop_pp = disop_p1;
//     //   upto = min_g+disop;
//     // }
//     // else{
//     //   disop_pp = disop_p2;
//     //   upto = min_r+disop2;
//     // }
//
//     double fin1=FLT_MAX;
//     double fin2=FLT_MAX;
//     for(int i=0;i<k;i++){
//       if(fin1 > distance(disop_p1.first, disop_p1.second, blue[i].first, blue[i].second)){
//         fin1 = distance(disop_p1.first, disop_p1.second, blue[i].first, blue[i].second);
//       }
//     }
//
//     for(int i=0;i<k;i++){
//       if(fin2 > distance(disop_p2.first, disop_p2.second, blue[i].first, blue[i].second)){
//         fin2 = distance(disop_p2.first, disop_p2.second, blue[i].first, blue[i].second);
//       }
//     }
//
//     if(min_g+disop+fin1 < min_r+disop2+fin2 ){
//       cout << min_g+disop+fin1<<endl;
//     }
//     else{
//       cout << min_r+disop2+fin2 << endl;
//     }
//     // cout << "FIN: " << fin+disop+ << endl;
//     // cout << upto << endl;
//     // cout << fin+upto << endl;
//   }
// }

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
    vector<pair<double, pair<double, double>>> dist;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
      double t1, t2;
      //Can better complexity here
      t1 = distance(x, y, red[i].first, red[i].second)+distance(red[i].first, red[i].second, green[j].first, green[j].second);
      t2 = distance(x, y, green[j].first, green[j].second)+distance(red[i].first, red[i].second, green[j].first, green[j].second);

        dist.push_back({t1, {green[j].first, green[j].second}});
        // cout << green[i].first <<" " <<  green[i].second << " " << red[i].first
        dist.push_back({t2, {red[i].first, red[i].second}});
    }
    // for(auto u:dist) cout << u.first<<" " << u.second.first << " " << u.second.second <<endl;
    sort(dist.begin(), dist.end());
    double min_dis=FLT_MAX;
    double op;
    for(int j=0;j<dist.size();j++)
    for(int i=0;i<k;i++){
      op = dist[j].first +distance(blue[i].first, blue[i].second, dist[j].second.first, dist[j].second.second);
      if(op<min_dis){
        // cout << op << " " << blue[i].first << " " <<  blue[i].second << " " <<dist[j].second.first << " " << dist[j].second.second<< endl;;
        min_dis = op;
      }
    }

    cout << fixed << setprecision(10)<< min_dis<<endl;

  }
}


// int main(){
//   long t;
//   cin >> t;
//   while(t--){
//     double x, y;
//     cin >> x >> y;
//     long n, m, k;
//     cin >> n >> m >> k;
//     vector<pair<double, double>>red, green, blue;
//     for(int i=0;i<n;i++){
//       double a, b;
//       cin >> a >> b;
//       red.push_back({a, b});
//     }
//     for(int i=0;i<m;i++){
//       double a, b;
//       cin >> a >> b;
//       green.push_back({a, b});
//     }
//     for(int i=0;i<k;i++){
//       double a, b;
//       cin >> a >> b;
//       blue.push_back({a, b});
//     }
//     double min_dis=FLT_MAX;
//     // cout << "Before Loop" <<endl;
//     for(int i=0;i<n;i++)
//     for(int j=0;j<m;j++)
//     for(int q=0;q<k;q++){
//       double one, two, three, four;
//       double c1 = distance(red[i].first, red[i].second, green[j].first, green[j].second);
//       one = distance(x, y, red[i].first, red[i].second)+c1+distance(green[j].first, green[j].second, blue[q].first, blue[q].second);;
//       two = distance(x, y, green[j].first, green[j].second)+c1+distance(red[i].first, red[i].second, blue[q].first, blue[q].second);;
//         //
//         // three = one + distance(green[j].first, green[j].second, blue[q].first, blue[q].second);
//         // four = two + distance(red[i].first, red[i].second, blue[q].first, blue[q].second);
//
//       min_dis = min(min(one, two), min_dis);
//     }
//
//
//
//     cout << fixed << setprecision(10)<< min_dis<<endl;
//   }
// }
