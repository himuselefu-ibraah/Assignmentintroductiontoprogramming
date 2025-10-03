/*Christopher Nyasimba
PA106/G/29043/25 
This program is for checking student eligibility for the final exam by checking their attendance and averqge marks.*/
#include<stdio.h>c
int main(){
    
    int attendance;
    float averagemark;
    
    printf("Enter your attendance:");
    scanf("%d",&attendance);
    
    printf("Enter your average marks:");
    scanf("%f",&averagemark);
    
    if (attendance>=85&&averagemark>=40){//the two conditions
        printf("You are eligible for final exam.");
    }else {
        printf("You are not eligible for the final exam.");
        
    }
    return 0;
      
    }
