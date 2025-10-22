/*Christopher Nyasimba
PA106/G/29043/25
This program is about calculating totalfare where the user inputs the kilometers traveled and then a rate of 50 per km is used to determine the total fare
*/

#include<stdio.h>
float calculatefare(float kms);
void main() {
    float kms;
    float totalfare;
    printf("Enter kilometres: ");
    scanf("%f",&kms);
    
    totalfare =calculatefare(kms);
     printf("The total bill is %.2f",totalfare);
    
    return ;
}
float calculatefare(float kms){
  float fare=0;
  fare=kms*50;
    
    return fare;
    }
