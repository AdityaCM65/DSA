#include <iostream.h>
#include <conio.h>
int n;
class demo{
 public :
 int a[20] , i , j , temp;
 void get();
 void dis();
 void bubble();
 void select();
};

void demo::get() {
 cout<<"Enter Elements : ";
 for(i=1; i<=n; i++) {
  cin>>a[i];
 }
}

void demo::dis() {
 cout<<"Elements are : ";
 for(i=1; i<=n; i++) {
  cout<<a[i]<<"\t";
 }
}

void demo::bubble() {
for(i=1; i<n-1; i++) {
 for(j=1; j<=n; j++) {
  if(a[j]>a[j+1]) {
   int temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
}
}

void demo::select() {
 int min_index;
for(i=1; i<=n; i++) {
min_index=i;
for(j=i+1;j<=n; j++) {
 if(a[j]<a[min_index]) {
  min_index=j;
 }
}
temp = a[min_index];
a[min_index]=a[i];
a[i]=temp;
}

}

void main() {
 clrscr();
 cout<<"Enter size of array : ";
 cin>>n;
 demo d;
 d.get();
 d.dis();
// d.bubble();
d.select();
 d.dis();
 getch();
}