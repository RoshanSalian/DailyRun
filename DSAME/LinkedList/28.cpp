#include<bits/stdc++.h>
using namespace std;

struct LinkedL{
  int data;
  struct LinkedL *next;
};

//Not the perfect way

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

void last(struct LinkedL **head){
  if(*head==NULL){
    return;
  }
  else{
    struct LinkedL *current, *p;
    p=current = *head;
    current=current->next;
    if(current!=NULL){
      last( &current );
      //cout << (current->data) << endl;;
    }
    cout << p->data << endl;
  }
}

int main(){
  struct LinkedL *current, *icurrent, *p, *q, *newn, *head=NULL;
  //head = NULL;

  create(&head);
  display(&head);

  last(&head);
}
