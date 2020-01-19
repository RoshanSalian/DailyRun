//Stack using LinkedList

#include<bits/stdc++.h>
using namespace std;

struct Linked{
  int data;
  struct Linked *next;
};

void pushL(struct Linked *head){
  long d;
  struct Linked *newNode, *p, *q, *current;

  cin >> d;
  newNode = (Linked *)malloc(sizeof(struct Linked));
  newNode->data=d;
  newNode->next=NULL;
  if(head->next==NULL){
    head->next = newNode;
  }
  else{
    current = head->next;
    while(current->next!=NULL){
      current=current->next;
    }
    current->next=newNode;
  }
  // return 1;
}

void popL(struct Linked *head){
  long d;
  struct Linked *newNode, *p, *q, *current;
  // cout<<"start"<<endl;
  if(head->next==NULL){
    // cout<<"if"<<endl;
    cout << "Stack Empty\n";
  }
  else{
    // cout<<"else"<<endl;
    current = head->next;
    while(current->next->next!=NULL){
      // cout <<current->data << " ";
      current=current->next;
    }
    cout<<"Popped "<<current->next->data <<endl;
    p = current->next;
    current->next=NULL;
    free(p); // check

  }
  // return 1;
}

int printL(struct Linked *head){
  struct Linked *newNode, *p, *q, *current;
  current=head->next;
  while(current->next!=NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << current->data;
  cout << endl;
}

int main(){

  struct Linked *head, *tail;
  head->next=NULL;
  int option=1;
  while(1){
    cin >> option;
    if(option==1){
      pushL(head);
    }
    else if(option==2){
      popL(head);
    }
    else if(option==3){
      printL(head);
    }
    else{
      break;
    }
  }
  // pushL(head);
  // popL(head);

}
