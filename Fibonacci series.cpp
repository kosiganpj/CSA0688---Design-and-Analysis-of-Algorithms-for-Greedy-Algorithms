#include<stdio.h>
int recursivefibonacci(int);
int main(){
int n,i;
printf("Enter the number of values: \n");
scanf("%d",&n);
printf("Fibonacci series: \n");
for(i=0;i<n;i++) 
{
printf("%d\t",recursivefibonacci(i));
}
}
int recursivefibonacci(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (recursivefibonacci(n-1) + recursivefibonacci(n-2));
}
