/*
Chiristopher Nyasimba
PA106/G/29043/25
The program prompts the user to enter height,id and bak balance and displays them.
*/

#include <stdio.h>//to access printf
int main(){
    float height;//store height
    int id;//store id
    double balance;//store balance
    
    //prompt the use to enter height using printf
    printf ("Enter your height:");
    scanf("%f", &height);//scanf used to read data from user %f reads a float value
    
    printf("Enter your ID number:");
    scanf("%d",&id);//%d reads an interger
    
    printf("Enter your bank balance:");
    scanf("%lf",&balance);// %f reads a float note a long float a double
    
    //displaying the information
    printf("Your height is:%f",height);
    printf("Your ID number is:%d",id);
    printf("Your bank balance is:%lf",balance);
    return 0;
     
}

