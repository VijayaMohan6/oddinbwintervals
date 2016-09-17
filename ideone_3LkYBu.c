#include <stdio.h>
int main(void) {
	int a,b,i;
scanf("%d %d",&a,&b);
printf("The odd numbers between the interval %d and %d ",a,b);
for(i=a;i<=b;i++){
	if(i%2!=0)
	{
		printf("\n%d",i);
	}
}
	return 0;
}
