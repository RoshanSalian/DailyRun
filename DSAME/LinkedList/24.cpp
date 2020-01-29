#include<bits/stdc++.h>
using namespace std;

struct LinkedL{
  int data;
  struct LinkedL *next;
};

//Traverse for length and again for middle element
//FASTER-- 2 Pointer. One pointer moves twice as fast as other

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
  struct LinkedL *pt1, *pt2;
  pt1 = pt2 = *head;

  while(pt2!=NULL && pt2->next!=NULL){
    pt1 = pt1->next;
    pt2 = pt2->next->next;

  }

  cout << pt1->data << "\n";

}


int main(){
  struct LinkedL *current, *icurrent, *p, *q, *newn, *head=NULL;
  //head = NULL;

  create(&head);
  display(&head);

  rev(&head);
}
