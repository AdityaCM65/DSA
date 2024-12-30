#include <iostream.h>
#include <conio.h>
int n;
class demo{
  public:
  int i ,mid,j , k , a[50],b[50];
  void get();
  void dis();
  void merge(int low ,int high);
  void merge_sort(int low , int mid , int high);
};

void demo::get(){
 cout<<"Enter elements : ";
 for(i=0; i<n; i++) {
  cin>>a[i];
 }
}

void demo::dis() {
cout<<"Elements are : ";
for(i=0; i<n; i++) {
 cout<<a[i]<<"\t";
}
}

void demo::merge(int low ,int high) {
if(low<=high) {
 mid= (low + high)/2;
 merge(low,mid);
 merge(mid+1,high);
 merge_sort(low , mid , high);
}
}

void demo::merge_sort(int low ,int mid ,int high) {
 i=low;
 j=mid+1;
 k=low;

 while(i<=mid && j<=high) {
  if(a[i]<=a[j]) {
   b[k]=a[i];
   i++;
   k++;
  }
  else {
   b[k]=a[j];
   j++;
   k++;
  }

 }

 if(i<=mid) {

  while(i<=mid) {
   b[k]=a[i];
   i++;
   k++;
  }
 }
 else {
  while(j<=high){
   b[k]=a[j];
   j++;
   k++;

  }

 }

 for(i=low; i<=high; i++) {
  a[i]=b[i];
 }
}

void main() {
 clrscr();
 cout<<"Enter size of array : ";
 cin>>n;
 demo d;
 int low=1;
 int high=n;
 d.get();
 d.dis();
 d.merge(low,high);
 d.dis();
 getch();
}