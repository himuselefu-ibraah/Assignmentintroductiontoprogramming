/*Christopher Nyasimba
PA106/G/29043/25
This program is about a no guessing game where the user guesses a no
*/

#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main() {
    int secrtno;
    int guess;
    
    // random no  generotor
    srand(time(0));
    //generate a random no btwn 1 and 20
    secrtno=rand()%20+1;
    
    printf("Welcome to no guessing game\n");
    
    while(1){
        printf("Enter your guess:");
        scanf("%d",&guess);
        
        if (guess>secrtno){
            printf("Too high\n");
            
            } else if (guess <secrtno){
                printf("Too low\n");
                
                }else {
                    printf("Congratulations!You guessed the correct number:%d\n");
                    break;
                    
                    }
        
        
        
        
        }
    
    
    return 0;
    
}
