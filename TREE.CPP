#include <iostream.h>
#include <conio.h>
#include <process.h>
struct ver{
  int data;
  ver *left , *right;
};

class tree {
  public:
  ver *create(int c , ver *);
  void in(ver*);
  void pre(ver*);
  void post(ver*);

};

ver *tree::create(int c , ver *node) {

 if(node==NULL) {
  node->data=c;
  node->left=NULL;
  node->right=NULL;
  return node;
 }
 else {
  if(c<node->data) {
   node->left=create(c,node->left);
  return node;
  }
  else {
   node->right=create(c,node->right);
   return node;
  }
 }
}


void tree::in(ver *node) {
 if(node) {
  in(node->left);
  cout<<node->data<<"\t";
  in(node->right);
 }
}


void tree::pre(ver *node) {
 if(node) {
 cout<<node->data<<"\t";
  pre(node->left);
  pre(node->right);
 }
}


void tree::post(ver *node) {
 if(node) {
  post(node->left);
  post(node->right);
  cout<<node->data<<"\t";
 }
}
void main() {

clrscr();

tree t;
ver *r = new ver;
r=NULL;

int n,ch;
while(ch!=5) {
 cout<<"enter choice : ";
 cin>>ch;

 switch(ch) {
  case 1:cout<<"Enter node : ";
	   cin>>n;
	   r=t.create(n,r);
	   break;
  case 2:cout<<"inorder";
	 t.in(r);
	 break;
  case 3:cout<<"post";
  t.post(r);
  break;
  case 4:cout<<"pre";
  t.pre(r);
  break;
  case 5:exit(0);
 }
}

getch();
}