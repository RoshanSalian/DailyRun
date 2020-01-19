#include<bits/stdc++.h>
using namespace std;

struct ListNode{
  int data;
  struct ListNode *next;
};

int ListLength(struct ListNode *head){
  struct ListNode *current = head;
  int count=0;

  while(current!=NULL){
    count++;
    current = current->next;
  }
  return count;
}

int insertNode(struct ListNode *head, int data, int position){
  struct ListNode *p, *q, *current;
  current = head;
  struct ListNode *newNode = (ListNode *)malloc(sizeof(struct ListNode))
  int k=1;
  p=current;

  // Case for memory limit

  // Case for 1st node missing

  while(current!=NULL && k<position ){
    k++;
    q=p;
    p=p->next;
  }

  q->next=newNode;
  newNode->next=p;

}

int main(){

}
