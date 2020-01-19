#include<bits/stdc++.h>
using namespace std;

long sumt(long x){//cout << 2<<endl;
  long sum=0, d;
  // cout << "X " << x <<endl;;

  while(x){
    d = x%10;
    sum += pow(d, 2);
    x/=10;
  }
  // cout << "Sum " << sum <<endl;
  return sum;
}

int main(){
  long a[830]={0};
  long n;
  long flag=0;
  cin >> n;
  long count=0;
  // long find = sumt(n);
  // while(a[find]==0){//cout << 1 <<endl;
  //   if(count==0)a[find]++;
  //
  //   find = sumt(find);
  //   // cout << find << " " <<endl;
  //   count++;
  //   if(find==1){
  //     flag=1;
  //     break;
  //   }
  //
  //   a[find]++;
  // }
  while(1){
    n = sumt(n);
    // cout << n <<endl;
    count++;
    if(n==1){
      flag=1;
      break;
    }
    else if(a[n]==1){
      flag=0;
      break;
    }
    else{
      a[n]++;
    }

  }
  if(flag){
    cout << count<<endl;
  }
  else{
    cout << "-1"<<endl;
  }

}
