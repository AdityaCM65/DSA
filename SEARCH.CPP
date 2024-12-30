#include <iostream.h>
#include <conio.h>

int n;
class demo {
  public:
  int a[50],i ,f,ele,temp,ptr;
  void get();
  void dis();
  void linear();
  void binary();
  void sort();
};

void demo::get() {
 cout<<"\nEnter Elements : ";
 for(i=1; i<=n; i++) {
  cin>>a[i];
 }
}

void demo::dis() {
 cout<<"\nElements are : ";
 for(i=1; i<=n; i++) {
  cout<<a[i]<<"\t";
 }
}

void demo::linear() {
 cout<<"\nEnter element to search in array : ";
 cin>>ele;
 f=0;
 for(i=1; i<=n; i++) {
  if(a[i]==ele) {
  f=1;
  cout<<"\nElement found at index : "<<i;
   return;
  }
 }
 if(f==0) {
  cout<<"\nElement not found";
 }
}

void demo::sort() {
 a[0]=-9999;
 for(i=2; i<=n; i++) {
   temp=a[i];
   ptr=i-1;
   while(a[ptr]>temp) {
    a[ptr+1]=a[ptr];
    ptr--;
   }
   a[ptr+1]=temp;
 }
}

void demo::binary() {
 cout<<"\nEnter element to search in array : ";
 cin>>ele;
 int low=1;
 int high=n;
 int mid;
 while(low<=high) {
 mid=(low+high)/2;
 if(a[mid]==ele) {
 cout<<"\nElement found at index : "<<mid;
 return;
 }
 else if(a[mid]<ele) {
  low=mid+1;
 }
 else {
 high=mid-1;
 }
 }
}

void main() {
 clrscr();

 cout<<"Enter size of array : ";
 cin>>n;

 demo d;
 d.get();
 d.sort();
 d.dis();
// d.linear();
 d.binary();
 getch();
}