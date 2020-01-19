//https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
#include<bits/stdc++.h>
using namespace std;
int main(){
  long t;
  cin >> t;
  while(t--){
    long arr[1001]={0};
    long n;
    long temp;
    cin >> n;
    long max=INT_MIN;
    for(int i=0;i<n;i++){
      long x;
      cin >> x;
      arr[x]++;
      if(x>max){max=x;}
    }
    // for(int i=1;i<=max;i++){
    //   if(arr[i])cout << i << " ";
    // }
    long flag=0;
    for(int i=1;i<=max;i++){
      if(arr[i]==0)continue;
      for(int j=1;j<=max && i!=j;j++){
        if ((i == j && arr[i] == 1) || arr[j] == 0)
                continue;
        long val = sqrt(i*i+j*j);
        if( (val*val) != (i*i+j*j) )continue;
        if(val>max){continue;}
        if(arr[val]){
          flag=1;
          break;
        }
      }
      if(flag)break;
    }
    if(flag){cout << "Yes\n";}
    else{cout << "No\n";}
    /*
    long temp1, temp2;
    int flag=0;
    for(int i=0;i<=max;i++){
      if(arr[i]){cout<<"Checking "<<i <<endl;
        if(i%2){//odd
          cout << "its odd"<<endl;
          temp = i;
          temp = temp*temp;
          long a, b;
          temp1 = floor((float)temp/2);
          temp2 = ceil((float)temp/2);
        }
        else{//even
          cout << "its even"<<endl;
          temp = i;
          temp /= 2;
          temp = temp * temp;

          if(((float)temp/2) == temp/2){
            temp1 = (temp/2)-1;
            temp2 = (temp/2)+1;
          }
          else{
            temp1=-1;
            temp2=-1;
          }
        }
        cout << "its factor "<< temp1 << " " << temp2<<endl;
      }
      if(temp1>0 && temp2>0)
      if(arr[temp1] && arr[temp2] &&temp1 <= max && temp2<=max){
        //cout << "Yes" <<endl;
        cout << "its factor "<< temp1 << " " << temp2<<endl;
        flag=1;
        break;
      }
    }*/
    // if(flag){cout << "Yes\n";}
    // else{cout << "No\n";}
  }
}
