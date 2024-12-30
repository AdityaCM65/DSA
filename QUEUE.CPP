#include <iostream.h>
#include <conio.h>
#include <process.h>
int n;
class demo{
  public:
  int q[20],f,r,ele,i;
  demo() {
   f=r=0;
  }
  void enqueue();
  void dequeue();
  void display();
};

void demo::enqueue() {
if((f==1 && r==n) || f==r+1) {
 cout<<"Overflow";
}
else {
 if(r==n) {
  r=0;
 }
 if(f==0) {
  f=1;
 }
 r++;
 cout<<"Enter element : ";
 cin>>ele;
 q[r]=ele;
}
}

void demo::dequeue() {
 if(f==0) {
 cout<<"Underflow";
 }
 else {
 if(f==r) {
  f=r=0;
 }
 if(f==n) {
  f=0;
 }
  cout<<"deleted : "<<q[f];
  f++;
 }
}

void demo::display() {
 int j;
 if(f==0) {
  cout<<"Underflow";
 }
 else if(f<=r) {
 for(i=f; i<=r; i++) {
  cout<<q[i]<<"\t";
 }
 }
 else {
  for(i=f; i<=n; i++) {
  cout<<q[i]<<"\t";
  }
  for(j=1; j<=r; j++) {
   cout<<q[j]<<"\t";
  }
 }
}



void main() {
 clrscr();
      cout<<"\nEnter size of queue ";
      cin>>n;

      demo d;
      int ch;
      while(ch!=5) {
       cout<<"\nEnter your choice : ";
       cin>>ch;
       switch(ch){
	case 1:d.enqueue(); break;
	case 2:d.dequeue(); break;
	case 3:d.display(); break;
	case 4: exit(0); break;
       }
      }
 getch();
}