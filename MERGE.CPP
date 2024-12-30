#include <iostream.h>
#include <conio.h>

int n;

class demo{
  public:
  int a[20],b[20] , i,j;
  void get();
  void dis();
  void merge(int low , int high);
  void merge_sort(int low , int mid , int high);
};

void demo::get() {
 cout<<"Enter Elemeents : ";
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

void demo::merge(int low , int high) {
if(low<high) {
 int mid=(low+high) /2;
 merge(low , mid);
 merge(mid+1,high);
 merge_sort(low , mid , high);
}
}

void demo::merge_sort(int low , int mid , int high) {
 int i=low;
 int j=mid+1;
 int k=low;

 while(i<=mid && j<=high) {
  if(a[i]<a[j]) {
   b[k]=a[i];
   k++;
   i++;
  }
  else {
   b[k]=a[j];
   k++;
   j++;
  }
 }

 if(i<=mid) {
  while(i<=mid) {
   b[k]=a[i];
   k++;
   i++;
  }
 }
 if(j<=high) {
  while(j<=high) {
   b[k]=a[j];
   k++;
   j++;
  }
 }

 for(i=1; i<=high; i++) {
  a[i]=b[i];
 }

}

void main() {
clrscr();
cout<<"Enter size ";
cin>>n;
demo d;
d.get();
d.dis();
d.merge(1,n);
d.dis();
getch();
}