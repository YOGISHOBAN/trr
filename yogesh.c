#include<stdio.h>
#include<conio.h>
int main()
{
	int rem,n1,n2,temp1=0,i,num;

printf("enter the numbers:");
scanf("%d %d",&n1,&n2);
for(i=n1;i<n2;i++){
    temp1=i;
    num=0;

	while(temp1!=0)
	{
		rem=temp1%10;
		num=num+rem*rem*rem;
		temp1=temp1/10;
	}
if(i==num)
{
	printf("%d",i);
}}}


