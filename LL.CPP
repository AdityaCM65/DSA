#include <iostream.h>
#include <conio.h>
#include <process.h>

class node{
 public:
 int info , item , s;
 node *link;

 void insert();
 void del();
 void dis();
 void sum();
 void search();

};

node *start=NULL , *move;

void node::insert() {

cout<<"Enter Node : ";
cin>>item;
node *node1 =new node();
node1->info=item;
node1->link=NULL;

if(start==NULL) {
 start=node1;
}
else {
 move=start;
 while(move->link!=NULL) {
  move=move->link;
 }
 move=node1;
}



}

void node::dis() {

move=start;
while(x!=NULL) {
cout<<"\n Node is : "<<x->info;
movex->link;
}
}


void main() {
 clrscr();
 node n;
 n.insert();
 n.insert();
 n.dis();
 getch();
}