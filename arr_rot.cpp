//2
//https://www.geeksforgeeks.org/array-rotation/

#include<bits/stdc++.h>

using namespace std;

void aux_array(int a[], int size, int k){

  for(int i=0;i<size;i++){
    int index = (i+k)%size;
    //if(index < 0){index = size +1 - index;}
    cout << a[index] << " ";
  }
}

void temp_var(int a[], int size, int k){

  //Store a[0] in temp
  //run loop for each rotation until k
  //O(n*k)

}

void juggle(int a[], int size, int k){
  int set_size = __gcd(size, k);

  for(int i=0;i<set_size;i++){
    int temp = a[i];
    int x =i;
    while(x+set_size<size){
      a[x] = a[x+set_size];
      x=x+set_size;
    }
    a[x] = temp;
  }
}

int main(){
  int size =9;
  int k = 2;
  int a[size];


  for(int i=0;i<size;i++){
    a[i] = rand()%(size+1);
  }

  juggle(a, size, k);

  for(int i=0;i<size;i++){cout << a[i] << " ";}cout << endl;

  aux_array(a, size, k);

}
