#include <iostream.h>
#include <conio.h>
int n;
class sort{
  public:
  int a[100],i,pivot , l , h ;
  void get();
  void dis();
  void quick(int l , int h);
  int partition(int l , int h);
};

void sort::get() {
 cout<<"\n Enter Array Elements : ";
 for(i=1; i<=n; i++) {
  cin>>a[i];
 }
}

void sort::dis() {
 cout<<"\n Array Elements are : ";
 for(i=1; i<=n; i++) {
  cout<<a[i]<<"\t";
 }
}

int sort::partition(int l , int h) {
 int pivot=a[l];
 int i=l;
 int j=h;
 while(i<j) {
  while(a[i]<=pivot) {
   i++;
  }
  while(a[j]>pivot) {
   j--;
  }
  if(i<j) {
   int temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }

 }
 int temp=a[j];
 a[j]=a[l];
 a[l]=temp;

 return j;
}

void sort::quick(int l , int h) {
 if(l<h) {
  int pivot=partition(l,h);
  quick(l,pivot-1);
  quick(pivot+1,h);
 }

}

void main() {
 clrscr();
 cout<<"\n Enter Size of Array : ";
 cin>>n;
 sort s;
 s.get();
 s.dis();
 cout<<"\nAfter Sorting : ";
 s.quick(1,n);
 s.dis();
 getch();
}