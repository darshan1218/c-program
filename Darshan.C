#include<stdio.h>
int main()
{
int a,b;
float c;
char op;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("enter choice\n");
printf("+ for addition\n");
printf("- for subtaction\n");
printf("* for multiplication\n");
printf("/ for division\n");
printf("%% for modulus\n");
scanf(" %c",&op);
if(op=='+')
{
c=a+b;
}
else if(op=='-')
{
c=a-b;
}
else if(op=='*')
{
c=a*b;
}
else if(op=='/')
{
if(b==0)
{
printf("enter nonzero number");
}
else
{
c=a/b;
}
}
else if(op=='%')
{
if(b==0)
{
printf("enter nonzero number");
}
else
{
c=a%b;
}
}
else
{
printf("give correct choice");
}
printf("output is %f",c);
}
