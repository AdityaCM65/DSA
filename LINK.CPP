#include <iostream.h>
#include <conio.h>

class node {
public:
int info;
node *next,*prev;
void insert();
void dis();
void del();

};
node *move,*start=NULL ,*temp;

void node::insert() {
node *node1=new node;
cout<<"ENter node : ";
cin>>info;
node1->info=info;
node1->next=NULL;
node1->prev=NULL;
if(start==NULL) {
 start=node1;

}
else {
 move=start;
 while(move->next!=NULL) {
  move=move->next;
 }
 move->next=node1;
 node1->prev=move;
}

}

void node::dis() {
 temp=start;
 while(temp!=NULL){
		     cout<<temp->info<<"\t";
		     temp=temp->next;
 }
}

void node::del() {
 temp=start;
 cout<<"\n Deleted node : "<<temp->info;
 start=temp->next;
 temp->prev=NULL;
}
void main() {
 clrscr();
 node d;
 d.insert();
 d.insert();
 d.insert();
 d.insert();
 d.insert();
 d.dis();
 d.del();
 d.dis();
 d.del();
 d.dis();
 getch();
}