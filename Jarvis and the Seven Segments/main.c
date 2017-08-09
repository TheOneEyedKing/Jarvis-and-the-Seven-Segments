#include<stdio.h>
long int numeq(long int x)
{
	long int c,a,sum=0;
	c=x;
	do
	{
		a=c%10;
		c=c/10;
		if(a==0||a==6||a==9)
			sum+=6;
		else if(a==2||a==3||a==5)
			sum+=5;
		else if(a==1)
			sum+=2;
		else if(a==4)
			sum+=4;
		else if(a==7)
			sum+=3;
		else if(a==8)
			sum+=7;
	}while(c!=0);
	return sum;
}
void main()
{
	long int N,size,arr[100000],copy[100000],min,i,j,x;
	scanf("%li\n",&N);
	for(i=0;i<N;i++)
	{
	    scanf("%li\n",&size);
		for(j=0;j<size;j++)
		{
			scanf("%li",&arr[j]);
			copy[j]=numeq(arr[j]);
			//printf("%li\n",copy[j]);
		}
		min=copy[0];
		x=0;
		for(j=0;j<size;j++)
		{
			if(copy[j]<min)
			{
				min=copy[j];
				x=j;
			}
		}
		printf("%li\n",arr[x]);
	}
}
