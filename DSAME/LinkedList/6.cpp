#include<bits/stdc++.h>
using namespace std;
//Check if Null terminated or ends in cycle
// Did not understand hashtable approach

//Approch1: User 2 pointer, fast and slow
struct LinkedL{
  int data;
  struct LinkedL *next;
};

int loopExists(struct LinkedL **head){
  struct LinkedL *slow, *fast;
  slow = fast = *head;
  int found=0;
  while(slow && fast && fast->next){
    if(slow==fast){
      found=1;
      return 1;
    }
    slow = slow->next;
    fast = fast->next->next;
  }
  return 0;
}

int main(){

}

//Problem 11 did not understand

//For finding the length of loop keep one pointer where is it and move the other pointer
