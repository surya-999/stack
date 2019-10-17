#include<stdio.h>
#define MAX 10

int top=-1,stack[MAX];
void push();
void pop();
void display();
 
void push()
{
int a;

if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&a);
top=top+1;
stack[top]=a;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
 void main()
{
int x;

while(1)
{
printf("enter any choice \n1.Push\n2.Pop\n3.Display");
printf("\n\nEnter your choice(1-3):");
scanf("%d",&x);

switch(x)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
default: printf("\nWrong Choice!!");
}
}
}
void display()
{
int i;

if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

