#include<stdio.h>

int main() {
	
	int i,num,sum=0;
	printf("enter num :");
	scanf("%d", &num);
	
	while(i<num) {
		if(num%i==0) 
			sum=sum+i;
			i++;
		}
		
		if(sum==num) 
			printf("%d is perfect no");
		
		else 
			printf("%d is not ")
		
	}
	

}
