#include<bits/stdc++.h>
using namespace std;
struct LinkedL{
  int data;
  struct LinkedL *next;
};

//Use two pointer Floyd Pointer and do in single pass


void split(struct LinkedL **head){
  struct LinkedL *current, *p, *q, *temp;
  long count=1;
  current = *head;
  current = current->next;
  while(current!=*head){
    current = current->next;
  }
  long i;
  while(i< (count/2)){
    head1.append(current);
    head1 = head1->next;
    current = current->next;
    i++;
  }
  while(i<=count){
    //second list
  }
}
