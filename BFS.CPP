#include <iostream.h>
#include <conio.h>
int n;
class demo{
 public:
   int a[20][20],i,j , reach[20] , q[20],index,r,f;
   demo() {
    index=1;
    f=r=0;
   }
   void get();
   void bfs();

 };

 void demo::get() {
  cout<<"ENter number of vertices : ";
  cin>>n;
  cout<<"Enter matrix : ";
  for(i=1; i<=n; i++) {
   for(j=1; j<=n; j++) {
    reach[i]=0;
    cin>>a[i][j];
   }
  }

 }

 void demo::bfs() {
  reach[1]=1;
  r++;
  f++;
  q[r]=index;
  while(f<=r) {
   index=q[f];
   f++;
   cout<<index<<"\t";
   for(j=1; j<=n; j++) {
    if(a[index][j]==1 && reach[j]!=1) {
     reach[j]=1;
     r++;
     q[r]=j;
    }
   }
  }

 }
void main() {
 clrscr();
      demo d;
      d.get();
      d.bfs();

 getch();
}