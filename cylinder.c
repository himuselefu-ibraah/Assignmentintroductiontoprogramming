/*Christopher Nyasimba
PA106/G/29043/25
This program prompts the user to enter height and radius of a cylinder and culculates the volume and surface area of the same cylinder

*/

#include<stdio.h>
int main(){
   float pie,radius,height,volume,surfacearea;
   
   printf("Enter radius:");
   scanf("%f",&radius);
   
   printf("Enter height:");
   scanf("%f",&height);
   
   //fomular for volume
   volume=(3.143*height*radius);
   printf("The volume is:%f\n",volume);
   
   //fomular for S.A
   surfacearea=((2*3.143*radius*radius)+(2*3.143*radius*height));
   printf("The surface area is:%f",surfacearea);
   
   
   
   
   
    

    
    
    
    
    
    
    return 0;
    
    
    
    
    
    }
