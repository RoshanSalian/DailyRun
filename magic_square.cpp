//https://www.hackerrank.com/challenges/magic-square-forming/problem
//Incomplete
#include<bits/stdc++.h>
using namespace std;
int comple(int i){
  return (10-i);
}
int not_main(){
  int a[3][3];
  int b[3][3]={0};
  int pre[10]={0};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> a[i][j];
      pre[a[i][j]]++;
    }
  }
  /*
  long sum=0;
  sum+= abs(a[1][1] - 5);
  pre[5]=0;
  for(int i=0;i<3;i++){
    for(int j=i;j<3;j++){
      if(a[i][j] == 10 - (a[2-i][2-j]) ){
          //cout << "satis " << i << j << endl;
          pre[a[i][j]]--;
          pre[a[2-i][2-j]]--;
      }
      else{
        if(pre[comple(a[i][j])] && !pre[comple(a[2-i][2-j])] ){
        //if(pre[a[2-i][2-j]] == 1){
          sum+=abs(a[i][j] - (comple(a[2-i][2-j])) );
          a[i][j] = 10 - (a[2-i][2-j]);
          pre[a[i][j]]--;
          pre[a[2-i][2-j]]--;
        }
        else if(!pre[comple(a[i][j])]){
          sum+=abs(a[2-i][2-j] - (comple(a[i][j])) );
          a[2-i][2-j] = comple(a[i][j]);
          pre[a[i][j]]--;
          pre[a[2-i][2-j]]--;
        }
        else if (pre[a[i][j]] == 1){
          sum+=abs(a[2-i][2-j] - (10 - (a[i][j]) ) );
          a[2-i][2-j] = 10 - (a[i][j]);
          pre[a[i][j]]--;
          pre[a[2-i][2-j]]--;
        }
        else{
          //cout << "else";
          //cout << "else " << i << j << endl;
        }

      }
    }
  }
  cout << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << a[i][j] << " ";
    }
    cout <<endl;
  }

  cout << sum <<endl;

  */
  // for(int i=1;i<=9;i++){
  //   cout << pre[i] << " ";
  // }cout<<endl;
  long cost=0;
  if((a[1][1]) != 5){
    b[1][1]=1;
    //cout << "bsda";
    cost=abs(a[1][1]-5);
    pre[a[1][1]]--;
    a[1][1]=5;
    pre[5]=-1;
  }
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  for(int i=0;i<3;i++){
    for(int j=i;j<3;j++){
      if(a[i][j]==comple(a[2-i][2-j])){
        pre[a[i][j]]=-1;
        pre[a[2-i][2-i]]=-1;
        b[i][j]=1;
        b[2-i][2-j]=1;
      }
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout <<b[i][j] << " ";
    }
    cout << endl;
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(pre[a[i][j]] == -1 ){
        b[i][j]=1;
        b[2-i][2-j]=1;
        cost+=abs(a[i][j] - comple(a[2-i][2-j]));
        a[i][j] = comple(a[2-i][2-j]);
        pre[a[i][j]]=-1;
        pre[a[2-i][2-j]]=-1;
      }
    }
  }

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     if(pre[a[i][j]] == -1 ){
  //       cost+=abs(a[i][j] - comple(a[2-i][2-j]));
  //       a[i][j] = comple(a[2-i][2-j]);
  //       pre[a[i][j]]=-1;
  //       pre[a[2-i][2-j]]=-1;
  //     }
  //   }
  // }

  // for(int i=1;i<=9;i++){
  //   cout << pre[i] << " ";
  // }cout<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout <<b[i][j] << " ";
    }
    cout << endl;
  }
  cout << cost;

}
int main(){//copied
  int magic_mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
};

int A[3][3];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
        scanf("%d", &A[i][j]);
}

int min_cost = 81;
for (int k = 0; k < 8; k++) {
    int crt_cost = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            crt_cost += abs( A[i][j] - magic_mat[k][i][j] );
    }
    if (crt_cost < min_cost)
        min_cost = crt_cost;
}

printf("%d", min_cost);
}
