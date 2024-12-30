#include <iostream.h>
#include <conio.h>


class node {
 public:
 int info ;
 node *next , *prev;
 void insert();
 void dis();
 void del();
};

node *move=NULL , *start=NULL , *temp=NULL;

void node::insert() {
int item;
cout<<"Enter Element : ";
cin>>item;
node *node1=new node();
node1->info=item;
node1->prev=NULL;
node1->next=NULL;

if(start==NULL) {
  start=node1;
}
else {
 move=start;
 while(move->next!=NULL) {
  move=move->next;
 }
 move->next=node1;
 node1->prev=start;
}

}

void node::dis() {
 temp=start;
 while(temp!=NULL) {
  cout<<temp->info<<"\t";
  temp=temp->next;
 }


}

void node::del() {
 temp=start;
 cout<<"Deleted node : "<<start->info;
 start=temp->next;
 start->prev=NULL;
 temp->next=NULL;
}
void main() {
 clrscr();
 node n;
 n.insert();
 n.insert();
 n.insert();
 n.dis();
 n.del();
 n.dis();
 getch();
}