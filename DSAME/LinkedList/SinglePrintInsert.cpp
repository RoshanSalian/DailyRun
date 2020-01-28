#include<bits/stdc++.h>
using namespace std;

struct LinkedL{
  int data;
  struct LinkedL* next;
};


void insertBeg(struct LinkedL *head, int data1){
  struct LinkedL *current;
  struct LinkedL *newn = (LinkedL *)malloc(sizeof(struct LinkedL));
  newn->data = data1;
  newn->next=head;
  head = newn;
}

void insertEnd(struct LinkedL *head, int data1){
  struct LinkedL *newn = (LinkedL *)malloc(sizeof(struct LinkedL));
  newn->next = NULL;
  newn->data = data1;
  struct LinkedL *current, *icurrent;
  current=head;
  while(current!=NULL){
    icurrent = current;
    current=current->next;
  }
  icurrent->next = newn;
}

void insertMiddle(struct LinkedL *head, int data1, int pos){
  struct LinkedL *newn = (LinkedL *)malloc(sizeof(struct LinkedL));
  newn->next = NULL;
  newn->data = data1;
  struct LinkedL *current, *icurrent;
  current = head;
  for(int i=0;i<pos-1;i++){
    icurrent = current;
    current = current->next;
  }
  icurrent->next = newn;
  newn->next=current;
}

void display(struct LinkedL *head){
  struct LinkedL *current;
  current=head;
  while(current->next!=NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << current->data << endl;
}

int main(){
  long n;
  cin >> n;

  struct LinkedL *head=NULL, *current, *icurrent, *newn;
  int temp;
  for(int i=0;i<n;i++){
    if(head==NULL){
      current = (LinkedL*)malloc(sizeof(struct LinkedL));

      cin >> temp;
      current->data = temp;
      current->next = NULL;
      head = current;
    }
    else{
      current = head;
      //icurrent = head;
      while(current->next!=NULL){
        current = current->next;
      }
      cin >> temp;
      newn = (LinkedL*)malloc(sizeof(struct LinkedL));
      newn->next = NULL;
      newn->data = temp;
      current->next = newn;
    }

  }
  cout << "Print"<<endl;
  display(head);
  current=head;

  int count=0;
  while(current!=NULL){
    current = current->next;
    count++;
  }

  cout << count<<endl;;

  insertMiddle(head, 99, 2);
  display(head);
}
