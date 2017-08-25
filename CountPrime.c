#include <stdio.h>
int cntprime(int a,int k)
{
int i;
for(i=a;i>=2;i--)
{
if(k%i==0)
return 0;
}
return 1;
}
int main(void) 
{
int i,ran;
int cnt=1;
double x;
ran=49;
for(i=3;i<ran;i++)
{
x=sqrt(i);
cnt+=cntprime(floor(x),i);
}
printf("\n Total number of prime numbers are %ld",cnt);
	// your code goes here
	return 0;
}
