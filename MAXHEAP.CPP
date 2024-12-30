#include <iostream.h>
#include <conio.h>


class demo{
public:
int n , a[10] , q,k,key,i , j;
void get();
void dis();
void create();
};

void demo::get() {
 cout<<"\nEnter range : ";
 cin>>n;
 cout<<"\nEnter the elements : ";
 for(i=1; i<=n; i++) {
  cin>>a[i];
 }
}

void demo::dis() {
 cout<<"\nHeap Tree";
 for(i=1; i<=n; i++) {
  cout<<a[i]<<"\t";
 }
}

void demo::create() {
 for(q=2; q<=n; q++) {

 i=q;
 key=a[q];
 j=i/2;

 while(i>1 && key>a[j]) {
  a[i]=a[j];
  i=j;
  j=i/2;

  if(j<1){
   j=1;
  }
 }
 a[i]=key;

 }
}

void main() {
 clrscr();

 demo d;
 d.get();
 d.dis();
 d.create();
 d.dis();
 getch();
}