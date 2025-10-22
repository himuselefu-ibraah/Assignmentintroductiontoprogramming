a/*Christopher Nyasimba
PA106/G/29043/25
This program converts fehrenheit to celcius
*/

#include <stdio.h>//to access printf
float convertTocelcius(float temp);
void main(){
    
    float temp;
    float tempcelcius;
    printf("Enter temperature in fehrenheit: ");
    scanf("%f",&temp);
    
    tempcelcius=convertTocelcius(temp);
     
     printf("Temperature in celcius is: %.2f",tempcelcius);
    
   
    return ;
     
}

float convertTocelcius(float temp){
    float celcius=0;
    celcius = (temp -32)*5/9;
    
    return celcius;
    
    
    
    
    
    }
