//1
//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include<bits/stdc++.h>

using namespace std;

void reverse_iter(int a){
  for(int i=0;i<size/2;i++){
    a[size-1-i] += a[i];
    a[i] = a[size-1-i] - a[i];
    a[size-1-i] = a[size-1-i] - a[i];
  }

  for(int i=0;i<size;i++){cout << a[i] << " ";}cout << endl;
}

void reverse_rec(a, start, end){
  if(start >= end){
    return;
  }
  swap(a[start], a[end]);
  reverse_rec(a, start+1, end-1);
}

int main(){
  int size =10;
  int a[size];


  for(int i=0;i<size;i++){
    a[i] = rand()%(size+1);
  }

  for(int i=0;i<size;i++){cout << a[i] << " ";}cout << endl;
  reverse_iter(a);
  reverse_rec(a, 0, size-1);

}
