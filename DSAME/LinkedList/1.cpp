#include<bits/stdc++.h>
using namespace std;
////

//Works only for global head  

/////

struct LinkedL{
  int data;
  struct LinkedL *next;
};
struct LinkedL *head;
void push(){
  cout << "Push \n";
  struct LinkedL *current, *newn;
  newn = (LinkedL *)malloc(sizeof(struct LinkedL));
  int temp; cout << "Data: ";  cin >> temp;
  newn->data=temp;
  newn->next=NULL;

  if(head==NULL){
    //cout << "if" <<endl;
    head = newn;
  }
  else{
    //cout <<"else" << endl;
    newn->next = head;
    head = newn;
  }

  ////////////

}

void pop(){
  cout << "Pop"<<endl;
  if(head==NULL){
    cout << "Empty \n";
  }
  else{
    cout << head->data;
    head = head->next;
  }
}

void top(){
  cout << "Top"<<endl;
  if(head==NULL){
    cout << "Empty"<<endl;
  }
  else{
    cout << head->data<<endl;
  }
}

void display(){
  cout << "Display"<<endl;
  struct LinkedL *current;
  current = (LinkedL *)malloc(sizeof(struct LinkedL));
  current = head;
  while(current!=NULL){
    //cout << "in";
    cout << current->data<< " ";
    current = current->next;
  }
  cout << endl;
}

int main(){
  struct LinkedL *current;
  int x=1;
  while(x){
    cout << "Choise: ";cin >> x;
    switch(x){
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3: top();
      break;
      case 4: display();
      break;
      case 0: x=0;
    }
  }
}
