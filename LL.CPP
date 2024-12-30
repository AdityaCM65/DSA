#include <iostream.h>
#include <conio.h>

class node {
 public :
 int info,item ;
 node *link;
 void insert();
 void dis();
 void sum();
 void search();
};

node *move=NULL , *start=NULL , *temp=NULL;

void node::insert() {
cout<<"Enter item : ";
cin>>item;
node *node1=new node;
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
 move->link=node1;

}

}

void node::dis() {
 temp=start;
 while(temp!=NULL) {
  cout<<temp->info<<"\t";
  temp=temp->link;
 }

}

void node::sum() {
 temp=start;
 int s=0;
 while(temp!=NULL) {
 s=s+temp->info;
 temp=temp->link;

 }
 cout<<"Sum is : "<<s;

}

void node::search() {
 int item;
 cout<<"Enter element to search : ";
 cin>>item;
 temp=start;
 int c=0,f=0;
 while(temp!=NULL) {
 c++;
  if(temp->info ==item) {
	     f=1;
     break;
  }
  temp=temp->link;
 }
 if(f==1) {
  cout<<"Element found at position : "<<c;
 }
 else {
  cout<<"Element not found ";
 }
}
void main() {
 clrscr();
 node n;
 n.insert();
 n.insert();
 n.insert();
 n.dis();
 n.sum();
 n.search();
 getch();
}