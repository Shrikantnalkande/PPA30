//Addition of two numbers

#include<stdio.h>

int main()
{
int num1=0;
int num2=0;
int res=0;

printf("Enter two numbers:\n");
scanf("%d%d",&num1,&num2);

res=num1+num2;

printf("Addition of two number is:%d\n",res);
return 0;
}