//https://practice.geeksforgeeks.org/problems/inversion-of-array/0/?track=md-arrays&batchId=144
#include<bits/stdc++.h>
using namespace std;


long merge(long arr[],long res[],long start, long mid, long end){//Fails
    //long res[end-start+1];
    long n = mid-start;
    long m = end-start;
    //long k=0;
    long inv=0;
    long i, k, j;
    i=j=k=0;
    i=start;
    j=mid;
    k=end;
    while( (i<=mid-1) &&  j<=end){
      if(arr[i]<=arr[j]){
        res[k++]=arr[i++];
      }
      else if(arr[j]>arr[i]){
        res[k++]=arr[j++];
        inv+=mid-i;
      }
    }
    while(i<=mid-1){
      res[k++]=arr[i++];
    }
    while(j<=end){
      res[k++]=arr[j++];
    }
    for(int i=start;i<=end;i++){
      arr[i]=res[i];
    }
    return inv;
}

long mergesort(long arr[], long temp[], long start, long end){
  long inv=0;
  if(start<end){
    cout << "call"<<endl;
    long mid = (start+end)/2;
    inv=mergesort(arr, temp, start, mid);
    inv+=mergesort(arr, temp, mid+1, end);

    inv+=merge(arr, temp, start, mid+1, end);
  }
  return inv;
}

long merge_sort(long arr[], long siz){
    long temp[(int)siz];
    siz--;
    return mergesort(arr, temp, 0, siz);
}

int main(){
  long t, n;
  cin >> t;
  while(t--){
    cin >>n;
    long arr[n];
    long temp[n]={0};
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    cout<< merge_sort(arr, n);
  }
}
