#include<stdio.h>
int prime_notprime(int,int);
int main()
{
	int n,p;
	printf("Enter the number = ");
	scanf("%d",&n);
	p=prime_notprime(n,n/2);
	if(p==1)
	{
		printf("%d is a prime number",n);
		++i;
	}
	else
	{
		printf("%d is not prime number",n);
		++i;
	}
}
int prime_notprime(int n,int i)
{
	if(i==1)
		return 1;
	else
	{
		if(n%i==0)
		return 0;
		else
		prime_notprime(n,i-1);
	}
}
