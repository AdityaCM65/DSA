#include <iostream.h>
#include <conio.h>

struct ver {
  int data;
  ver *left , *right;
};

class demo {
  public:
  ver* create(int , ver*);
  void in(ver*);
  void pre(ver*);
  void post(ver*);
};

ver demo::create(int c,ver *node) {
 if(node==NULL) {
  node=new ver;
  node->data=c;
  node->left=NULL;
  node->right=NULL;
  return node;
 }
 else {
  if(c<node->data) {
   node->left=create(c,node->left);
  }
  else {
  node->right=create(c,node->right);
  return node;
  }
 }
}

void demo::in(ver *node) {
 if(node) {
  in(node->left);
  cout<<node->data<<"\t";
  in(node->right);
 }
}


void demo::pre(ver *node) {
 if(node) {
  cout<<node->data<<"\t";
  pre(node->left);
  pre(node->right);
 }
}

void demo::post(ver *node) {
 if(node) {
  post(node->left);
  post(node->right);
  cout<<node->data<<"\t";
 }
}



void main() {
 clrscr();
demo d;
ver *r=new ver;
r=NULL;
r=d.create(20,r);
 getch();
}