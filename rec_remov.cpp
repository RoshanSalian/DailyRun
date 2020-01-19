//https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates/0/?track=md-string&batchId=144
#include<bits/stdc++.h>
using namespace std;

char arr[100005];

// void rec(char arr[], char elem, int start, int size ){
//   if(start==size-1){return;}
//   int i=start;
//   for(i=start;i<size;i++){
//     if(arr[i]==elem){
//       arr[i]='!';
//     }
//     else{
//       break;
//     }
//   }
//   rec(arr, arr[i], i+1, size);
// }

void remov(char arr[], int start, int size){
  //cout << "Isndie"<<endl;
  //****************
  // for(int i=0;i<size-1;i++){
  //   if(arr[i]!='!'){
  //     char temp = arr[i];
  //     if(arr[i]=='!'){i++;}
  //     if(temp==arr[i+1]){
  //       arr[i]='!';
  //       arr[i+1]='!';
  //       i++;
  //     }
  //   }
  // }
  // //cout << "dup";
  // long dup;
  // for(int i=0;i<size-1;i++){
  //   char temp = arr[i];
  //   if(arr[i]=='!')
  //   while(arr[i+1]!='!' && i<size-1){i++;}
  //   if(temp==arr[i]){
  //     dup=1;
  //     break;
  //   }
  // }
  for(int i=0;i<size;i++){
    char temp = arr[i];
    long j=i+1;
    long update=0;
    //cout << "scanning " << arr[i] << " @" << i << endl;
    while(arr[i]!='!' && j<size && arr[j]==arr[i] || arr[j]=='!' ){//cout <<"Inside " << j <<endl;
      if(arr[j]=='!'){
        j++;
        continue;
      }
      //cout << "similarity " <<arr[i] << " " << arr[j]<<endl;
      arr[j]='!';
      j++;
      update=1;

    }
    if(update==1){//cout << "Changing "<<arr[i] << " @ " << i <<endl;
      arr[i]='!';
    }
    //i=j;
    i=j-1;

  }
  int dup=0;
  for(int i=0;i<size && dup!=1;i++){
    char temp = arr[i];
    long j=i+1;
    dup=0;
    //cout << "scanning " << arr[i] << " @" << i << endl;
    while(arr[i]!='!' && j<size ){//cout <<"Inside " << j <<endl;
      //cout << "checking " << arr[i] << " " << arr[j]<<endl;
      if(arr[j]=='!'){
        j++;
        continue;
      }
      if(arr[i]==arr[j]){//cout << "Match"<<endl;
        dup=1;
        break;
      }
      else{//cout << "No Match"<<endl;
        break;
      }
      j++;
    }
    if(dup){
      //cout<<"break"<<endl;
      break;
    }
  }
  //cout << "dup " << dup <<endl;
  //****************
  //cout<<endl;for(int i=0;i<size;i++){cout << arr[i];}cout << endl;
  if(dup){
  remov(arr, 0, size);
  }

}

int main(){//Done
  long t;
  cin >> t;
  while(t--){
    cin >> arr;
    //long size = sizeof(arr)/sizeof(arr[0]);
    // rec(arr, arr[0],1,size);
    // for(int i=0;i<size;i++){
    //   if(arr[i]!='!'){cout << arr[i];}
    // }
    long dup=0, count=0;
    //std::cout << "Start" << '\n';
    for(int i=0;arr[i]!='\0';i++){
      if(arr[i]==arr[i+1]){
        dup=1;

      }
      count++;
    }
    //cout << dup<<endl;
    //cout << count <<endl;
    if(dup){
    remov(arr, 0, count);
    }
    for(int i=0;i<count;i++){
      if(arr[i]!='!'){cout<<arr[i];}
    }
    cout<<endl;
  }
}
