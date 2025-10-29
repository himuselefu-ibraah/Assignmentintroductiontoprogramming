/*PA106/G/29043/25
Christopher Nyasimba 
this program is a hotel management system that
 calculates total revenue and average*/





#include <stdio.h>

int main(){
	
	float revenue[7];
	float total=0;
	float average;
	
	for(int i=0; i<7; i++){
	
	printf("enter your revenue for day %d:",i+1);
	scanf("%f",&revenue[i]);
	total =total+revenue[i];
	}
	
	
	average=total/7;
	
	printf("the total revenue is :%.2f\n",total);
	printf("the average is :%.2f\n",average);
	
	
	return 0;
}