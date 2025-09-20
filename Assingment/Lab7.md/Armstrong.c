#include <stdio.h>

int main(){
	int num,sum,rem,temp;
	
printf("Armstrong numbers between 1 and 500 are:\n");

for(num = 1; num <=500; num++)
{
	sum=0;
	temp=num;
	
	for(; temp>0; temp /= 10)
{
	rem = temp % 10;
	sum += rem * rem * rem;
	}
	
	if(sum == num) {
		printf("%d\n",num);
		
	}
}
return 0;
}

