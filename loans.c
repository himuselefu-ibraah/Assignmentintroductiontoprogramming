/*Christopher Nyasimba
PA106/G/29043/25 
This program is about loans where the user will be prompted to enter age and income and if he/she meets the conditions of the loan a congratulation message is displayed.*/
#include<stdio.h>c
int main(){
    
    int age;
    float income;
    
    printf("Enter your age:");
    scanf("%d",&age);
    
    printf("Enter your monthly income:");
    scanf("%f",&income);
    
    if (age>21&&income>21000){//the two conditions
        printf("You qualify for a loan.");
    }else {
        printf("Unfortunately we are unable to offer you a loan.");
        
    }
     return 0; 
    }
