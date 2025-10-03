/*Christopher Nyasimba
PA106/G/29043/25
This program is about a user choosing the data package he wants and it displays the package and its cost*/


#include <stdio.h>
int main(){
    int num;
    
    printf("Select Data Bundle:\n");
    
    printf("'1'. 100MB @ 50 KES\n");
    printf("'2'.500MB @ 200 KES\n");
    printf("'3'.1GB @ 350 KES\n");
    printf("'4'.2GB @ 600 KES\n");
   
    printf("Enter your choice: (1-4)");
    scanf("%d",&num);
    
    switch (num){
    case 1:
        printf("You selected 100MB. Cost = 50 KES\n");
    break;
        
    case 2:
        printf("You selected 500MB. Cost = 200 KES\n");
     break;
        
     case 3:
         printf("You selected 1GB. Cost = 350 KES\n");
     break;
        
     case 4:
         printf("You selected 2GB. Cost = 600 KES\n");
     break;
        
     default:
         printf("Invalid choice");
        }
    return 0;
}
