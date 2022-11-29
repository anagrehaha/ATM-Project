//MOHAMMAD KHALAD ANAGREH 130897

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<stdbool.h>
#include<string.h>
#include"head.h"

int main(void) {
  ATM p1;
    Name(&(*p1));
    card(&(*p1));
    (*p1).date = datetime(&(*p1));
    (*p1).balance = Balance(&(*p1));
    (*p1).pin_number = Pin(&(*p1));
    int r;
    bool t= true;
    while(t==true){
        printf("1. Check balance. \n");
        printf("2. Withdrawal. \n");
        printf("3. Deposite. \n");
        printf("4. Change Pin number.");
        printf("5. Edit name. \n");
        printf("6. Renew card (i.e. extend expiration date)\n");
        printf("7. Print card information \n");
        printf("8. Exit \n");
scanf("%d",&r);
if(r==1)
CheckBalance(p1);
else if(r==2)
withdrawl(p1);
else if(r==3)
Deposite(p1);
else if(r==4)
ChangePin(p1);
else if(r==5)
ChangeName(p1);
else if(r==7)
cardprint(p1);
else if(r==8)
exit(0);
else
printf("Invalid number \n");
}
return 0;
}
