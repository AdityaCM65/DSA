#include <iostream.h>
#include <conio.h>
#include <string.h>

class demo {
  public:
  char infix[20] , postfix[20] , s[20];
  int i,p,top;
  demo() {
   top=-1;
   i=p=0;
   cout<<"Enter infix expression : ";
   cin>>infix;
   strcat(infix,")");
   s[++top]='(';
  }

  int precedence(char ch);
  void post();
  void dis();

};

int demo::precedence(char ch) {
	  switch(ch) {
	   case '^':return 3;
	   case '*':return 2;
	   case '/':return 2;
	   case '+':return 1;
	   case '-':return 1;
	   default : return 0;
	  }
}

void demo::post() {
 char ch;
 while(top!=-1) {
  ch=infix[i++];
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='1' && ch<='9')){
   postfix[p++]=ch;
  }
  else if(ch=='(') {
  s[++top]=ch;
  }
  else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^') {
  while(precedence(ch) <= precedence(s[top])) {
	      postfix[p++]=s[top--];
  }
  s[++top]=ch;
  }
  else if(ch==')') {
   while(s[top]!='(') {
    postfix[p++]=s[top--];
    top--;
   }
  }
  else {
   cout<<"wrong string";
  }

 }

 postfix[p]='\0';
}

void demo::dis() {
 cout<<"post : "<<postfix;
}
void main() {
clrscr();
demo d;
d.post();
d.dis();
getch();
}
