/*Christopher Nyasimba
PA106/G/29043/25
This program prompts a user to enter amount to withdraw and displays his balance 
*/

#include <stdio.h>//to access printf
int main(){
    int amount;
    int balance =1000;
    printf("Your current balance is %d \n",balance);
    
    while (balance>0){
    printf ("Enter the amount to withdraw");
    scanf("%d",&amount);
    balance -=amount;//balance =balance -amount
    printf("New Balance %d\n",balance);
    }
    printf("Insufficient balance");
   
    return 0;
     
}
