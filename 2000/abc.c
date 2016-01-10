#include<stdio.h>
int main()
{
	int a,b,c,i;
	for(i=0;i<1000;i++)
	{
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(i+b*100+c*11==532)
			printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
