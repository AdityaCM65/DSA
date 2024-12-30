#include <iostream.h>
#include <conio.h>

class demo {

  public:
  int a[20][20] , visited[20] , i , j , k , n;
  void get();
  void dfs(int v);

};

void demo::get() {
cout<<"Enter number of node : ";
cin>>n;
for(i=0; i<n; i++) {
 visited[i]=0;
 for(j=0; j<n; j++) {
  cin>>a[i][j];
 }
}
dfs(0);
}


void demo::dfs(int v) {
 visited[v]=1;
 cout<<"\t"<<v+1;
 for(k=1; k<=n; k++) {
  if(a[v][k]==1){
  if(visited[k]==0) {
   dfs(k);
  }
  }
 }
}


void main() {
 clrscr();
	   demo d;
	   d.get();
 getch();
}