/*Christopher Nyasimba
PA106/G/29043/25
This program is to calculate the total bill for given number of units consumed
*/

#include<stdio.h> 
int main() {
    float units,totalbill;
    
    printf("Enter the number of water units consumed:");
    scanf("%f",&units);
    
    if (units<=30){
        totalbill=units*20;
    printf("The total bill is %f",totalbill);
    }
    else if(units>=31 &&units<=60) {
        totalbill=units*25;
        printf("The total bill is %f",totalbill);
        
     }
     else if(units>=61){
         totalbill=units*30;
         printf("The total bill is %2f",totalbill);

     }
     
     else {
         printf("Invalid answer");
         }
    
    
    return 0;
    
}
