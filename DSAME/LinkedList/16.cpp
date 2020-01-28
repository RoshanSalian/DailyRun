#include<bits/stdc++.h>
using namespace std;

struct LinkedL{
  int data;
  struct LinkedL *next;
};

void create(struct LinkedL **head){
  struct LinkedL *current;
  int times;
  cout << "Len: ";
  cin >>times;
  while(times--){
    struct LinkedL *newn = (struct LinkedL *)malloc(sizeof(struct LinkedL));
    int data1;cout << "Data: ";
    cin >> data1;
    newn->data = data1;
    newn->next = NULL;

    if(*head==NULL){
      *head = newn;
    }
    else{
      current = *head;
      while(current->next!=NULL){
        current = current->next;
      }
      current->next = newn;
    }
  }
}

void display(struct LinkedL **head){
  cout << "Print\n";
  struct LinkedL *current;
  current = *head;
  while(current!=NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void rev(struct LinkedL **head){
  struct LinkedL *current, *icurrent, *p, *q;
  current = *head;
  if(current->next==NULL){
    return;
  }
  else{
    while(current->next!=NULL){

    }
  }
}

int main(){
  struct LinkedL *current, *icurrent, *p, *q, *newn, *head=NULL;
  //head = NULL;

  create(&head);
  display(&head);

  rev(&head);
}
