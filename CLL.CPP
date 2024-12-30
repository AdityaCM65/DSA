#include <iostream.h>
#include <conio.h>

class node {
  public:int c;
  node() {
   c=0;
  }
  int info;
  node *link;
  void insert();
  void dis();
  void del();
};

node *move=NULL,*start=NULL,*temp=NULL;

void node::insert() {
 int item;
 cout<<"Enter Element : ";
 cin>>item;
 node *node1 = new node();
 node1->link=NULL;
 node1->info=item;
 c++;
 if(start==NULL) {

 start=node1;
 node1->link=start;

 }
 else {
  move=start;
  while(move->link!=start) {
  move=move->link;

  }
  move->link=node1;
  node1->link=start;

 }
}

void node::dis() {
 temp=start;
 cout<<"\nTotal nodes are : "<<c;
 do{
		     cout<<temp->info<<"\t";
		     temp=temp->link;
 }while(temp!=start);
}

void node::del() {
 int pos;
 cout<<"\nEnter position:";
 cin>>pos;


 if(start==NULL) {
  cout<<"LL is empty";
 }
 if(pos>c || pos<1) {
  cout<<"invalid";
  return;
 }

 if(pos==1) {
  temp=start;
  while(temp->link!=start){
   temp=temp->link;
  }
  cout<<"\nDeleted element : "<<start->info;
  start=start->link;
  temp->link=start;
  c--;
 }



}

void main() {
clrscr();
	node n;
	n.insert();
	n.insert();

	n.insert();
	n.dis();
getch();
}