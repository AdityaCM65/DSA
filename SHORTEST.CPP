#include <iostream.h>
#include <conio.h>

class demo {
public:
int a[5][5] , i , j , k , s , n ,d;
void insert();
void display();
};

void demo::insert() {
 cout<<"Enter number of vertex : ";
 cin>>n;

 cout<<"Enter matrix : ";
 for(i=1; i<=n; i++) {
  for(j=1; j<=n; j++) {
   cin>>a[i][j];
   if(a[i][j]==-1) {
    a[i][j]=9999;
   }
  }
 }

 for(i=1; i<=n; i++) {
  for(j=1; j<=n; j++) {
   for(k=1; k<=n; k++) {
    if(a[i][j]<a[i][k]+a[k][j]) {
     a[i][j];
    }
    else {
     a[i][j]=(a[i][k]+a[k][j]);
    }
   }
  }
 }
}

void demo::display() {
 for(i=1; j<=n; j++) {
  for(j=1; j<=n; j++) {
   cout<<"\t"<<a[i][j];
  }
  cout<<endl;
 }


 cout<<"ENter source : ";
 cin>>s;

 cout<<"Enter destination : ";
 cin>>d;

 cout<<"Short : "<<a[s][d];
}

void main() {
 clrscr();
 demo d;
 d.insert();
 d.display();
 getch();
}