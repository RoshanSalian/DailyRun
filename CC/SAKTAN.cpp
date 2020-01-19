#include<bits/stdc++.h>
using namespace std;

int main(){//Fails half
  long t;
  cin >> t;
  while(t--){
    long n, m, q;
    cin >> n >> m >>q;
    long mat[n][m]={0};
    // cout << n << " " << m <<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        mat[i][j]=0;
      }
    }

    for(int i=0;i<q;i++){
      long x, y;
      cin >> x >> y;
      x--;
      y--;
      // mat[x][y]++;//check
      for(int i=0;i<m;i++){
        // cout << "before "<< x << " " << i << " " << mat[x][i]<<endl;
        mat[x][i]++;
        // cout << "after "<< x << " " << i << " " << mat[x][i]<<endl;
      }
      for(int i=0;i<n;i++){
        mat[i][y]++;
        // cout << i << " " << y << " " << mat[i][y]<<endl;
      }
      // mat[x][y]--;
      // cout << "/***/"<<endl;
      // for(int i=0;i<n;i++){
      //   for(int j=0;j<m;j++){
      //     cout << mat[i][j]<<" ";
      //   }
      //   cout << endl;
      // }
      // cout << "/***/"<<endl;

    }
    long od=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(mat[i][j]%2==1){
          od++;
        }
      }
    }
    cout << od <<endl;
  }


}
