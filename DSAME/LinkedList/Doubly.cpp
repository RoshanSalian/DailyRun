#include<bits/stdc++.h>
using namespace std;

struct Doubly{
  int data;
  struct Doubly *left;
  struct Doubly* right;
};

struct Doubly *head;

void create(){
  int size;
  cout<< "Size: ";
  cin >> size;
  struct Doubly *newn, *prevn;
  for(int i=0;i<size;i++){
    long data1;
    newn = (Doubly* )malloc(sizeof(struct Doubly));
    cin >> data1;
    newn->data = data1;
    if(i==0){
      newn->left = NULL;
      newn->right = NULL;
      head = newn;
    }
    else{
      prevn->right = newn;
      newn->left = prevn;
      newn->right = NULL;
    }
    prevn = newn;
  }
}

void display(){
  cout << "Display"<<endl;
  struct Doubly *newn = (Doubly *)malloc(sizeof(struct Doubly));
  newn = head;
  while(newn!=NULL){
    cout << newn->data << " ";
    newn = newn->right;
  }
  cout << endl;
}

void insert1(int data1, int pos){
  struct Doubly *newn, *current;
  if(head == NULL){
    cout << "Empty" << endl;
  }
  else{
    newn = (Doubly *)malloc(sizeof(struct Doubly));
    newn->data = data1;
    if (pos==1){
      newn = (Doubly *)malloc(sizeof(struct Doubly));
      newn->data = data1;

      newn->right = head;
      newn->left = NULL;
      head->left=newn;
      head = newn;
    }
    else{
      cout << "cp1"<<endl;
      current = head;
      int count=1;
      while(current!=NULL && count<pos){
        current = current->right;
        count++;
      }
      cout << "cp2 " << count << " "<< pos <<endl;
      if(pos == count){//Reaches NULL. No left for NULL 
        current = current->left;
        cout << "* " << current->data << endl;
        current->right = newn;
        newn->left = current;
      }
      else if(current==NULL){
        cout << "Out of Bound"<<endl;
      }
      else{
        cout << "cp3"<<endl;
        newn->left = current->left;
        newn->right = current;
        cout << "cp4"<<endl;
        current->left->right = newn;
        current->left=newn;
      }

    }
  }
}

int main(){

  create();
  display();

  int x=1;
  while(x){
    int data1, pos;
    cin >> data1 >> pos;
    insert1(data1, pos);
    display();
    cout << "more ";
    cin >> x;
  }

}
