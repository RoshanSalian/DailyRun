#include<bits/stdc++.h>
using namespace std;

long merg(long a[], long temp[], long start, long mid, long end){
  long i=start, j=mid, k=start;
  long inv=0;
  while ((i <= mid - 1) && (j <= end)) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
            inv = inv + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = a[i++];

    while (j <= end)
        temp[k++] = a[j++];

    for (i = start; i <= end; i++)
            a[i] = temp[i];

    return inv;
}

long mer(long a[], long start, long end, long temp[]){
  long mid, inv=0;
  if(end>start){
    mid = (start+end)/2;
    inv=mer(a, start, mid, temp);
    inv+=mer(a, mid+1, end, temp);
    inv+=merg(a, temp, start, mid+1, end);
  }
  return inv;
}



int main(){
  long t;
  cin >> t;
  while(t--){
    long n, k;
    cin >> n >> k;
    long a[n];
    for(int i=0;i<n;i++){
      cin >>a[i];
    }
    // cout << "imput";
    long temp[n]={0};
    // cout << mer(a, 0, n-1, temp)*n*(n-1)*0.5*k <<endl;
    cout << "False: " << mer(a, 0, n-1, temp)*k + n*(n-1)*0.5*k<<endl;
    // cout << "True" << mer(a, 0, n-1, temp)<<endl;
  }
}
