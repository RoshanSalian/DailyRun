#include<bits/stdc++.h>
using namespace std;
 int main(){
   long t;
   cin >> t;
   while(t--){
     long n;
     cin >> n;
     vector<long> v;
     for(int i=0;i<n;i++){
       long x;
       cin >> x;
       v.push_back(x);
     }
     long min = INT_MAX;
     long counter=0;
     int i;
     for(i=0;i<=4;i++){
       if(v[i]<min){
         counter++;
         min = v[i];
       }
       else{

       }
     }
     // cout << counter <<endl;
     long temp_min=INT_MAX;
     for(i;i<n;i++){
       temp_min = v[i-5];
       //cout << "For " << v[i] << " ";
       for(int j=i-5;j<i;j++){
         if(v[j]<temp_min){
           temp_min = v[j];
         }
       }
       // cout << " min is " << temp_min<<endl;
       if(v[i]<temp_min){//cout  << "AT = " << v[i] <<endl;
         counter++;
       }
     }
     cout << counter <<endl;
   }
 }
