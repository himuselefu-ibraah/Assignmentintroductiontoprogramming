/*
Christopher Nyasimba 
PA106/G/29043/25
this program calculates the total bill of electricity according to given rates 

*/



#include<stdio.h> //to access printf
//function prototype 
float calculatebill(float units);
void main() {
    float units;
    float totalbill;
    printf ("Enter units consumed:\n");
    scanf("%f",&units);
    
    totalbill=calculatebill(units);
    
    printf ("the total bill is %.2f\n",totalbill);
    
    return ;
}
float calculatebill(float units){
    
    float bill=0;
    if (units<=100){ bill=units*10;
        }else if (units<=200){bill =(100*10)+((units-100)*15);
            }else{bill =(100*10)+(100*15)+((units-200)*20);}
    
    return bill;
    
    }
