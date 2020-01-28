#include<bits/stdc++.h>
using namespace std;
//2-5 Variant of nth node from end
struct LinkedL{
  int data;
  struct LinkedL *next;
};

void create(struct LinkedL **head){
  struct LinkedL *current;
  int times;
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

void nthfromend(struct LinkedL **head, int n){
  int count=0;
  struct LinkedL *current, *icurrent;
  current = *head;
  while(current!=NULL && count<n){
    current = current->next;
    count++;
  }
  //cout << "cp1" << endl;
  if(current==NULL){
    cout << "Invalid\n";
  }
  else{
    //cout << "cp2" << endl;
    icurrent = *head;
    //cout << "**" << current->data << endl;
    while(current!=NULL){
      icurrent = icurrent->next;
      current = current->next;
    }
    //cout << "cp3" << endl;
    cout<< icurrent->data<<endl;
  }

}


int main(){

  struct LinkedL *current, *icurrent, *p, *q, *newn, *head=NULL;
  //head = NULL;

  create(&head);
  display(&head);
  long n;
  cin >> n;
  nthfromend(&head, n);

}
