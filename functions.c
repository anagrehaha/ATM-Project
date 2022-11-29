#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdbool.h>
#include "head.h"




void Name(struct ATM *p1)
{
  printf("Enter your first and last name: ");
  fgets((*p1).Holder_name,sizeof((*p1).Holder_name),stdin);
}

void card(struct ATM* p1)
{
  int c;
  printf("Enter your card number: (6- digits)");
  while(1)
  {
    scanf("%d",&(*p1).Card_Number);
    if((*p1).Card_Number>100000&&(*p1).Card_Number<1000000)
    {
      break;
    }
    else 
    {
      printf("Invalid Number.\n");
    }
  }
}

int datetime(struct ATM* p1)
{
  int s;
  while(1)
  {printf("Enter date of expiration in this format mmyyyy\n");
  scanf("%d",&s);
  int y = s % 10000;
  int m =  ( s % 100000 ) / 10000;
  int d = s / 100000;
  if(d>=0 && d<=1 && m>=1 && m<=12 && y>=2022)
  return 1;
  else 
  printf("Invalid Date\n");
}
}

int Balance(struct ATM *p1){
    printf("Enter Balance\n");
    while(1)
    {
    scanf("%lf",&(*p1).balance);
    if((*p1).balance < 0)
    printf("invalid balance.");
    else break;
    }
    return (*p1).balance;
}

int Pin(struct ATM *p1){
     int c;
    printf("Enter Your Pin Number (3- digits)\n");
     while(1){
        scanf("%d",&c);
    if(c>=100&&c<1000){
        return c;
    }
    else printf("invalid number\n");
    }  
}


void CheckBalance(struct ATM *a){
    printf("Balance = ");
    printf("%f",(*a).balance);
    printf("\n");
}
void withdrawl(struct ATM *p){
    double a;
    printf("Enter amount to withdraw \n");
    scanf("%lf",&a);
    (*p).balance=(*p).balance-a;
    printf("Available Balance is ");
    printf("%f",(*p).balance);
    printf("\n");
}
void Deposite(struct ATM *p){
  double a;
  printf("Enter amount to Deposit\n");
  scanf("%lf",&a);
  (*p).balance=(*p).balance-a;
  printf("Available Balance is");
  printf("%lf",(*p).balance);
  printf("\n");
}
void ChangePin(struct ATM *p){
  int c;
  printf("Enter Your new Pin Number (3- digits)\n");
  while(1){
    scanf("%d",&c);
    if(c>=100&&c<1000){
        (*p).Card_Number = c;
        break;
    }
    else 
    printf("invalid number\n");
  }}

void ChangeName(struct ATM *p){
 char f,l;
  printf("Enter Your First and Last Name");
  fgets((*p).Holder_name,sizeof((*p).Holder_name),stdin );
  
}
  void cardprint(struct ATM *p){
        printf("Holder Name : ");printf("%s",(*p).Holder_name);printf("\n");

        printf("Card Number");printf("%d",(*p).Card_Number);printf("\n");

        printf("Date : ");printf("%d",(*p).date);printf("\n");

        printf("Balance : ");printf("%lf",(*p).balance);printf("\n");

        printf("Pin Number : ");printf("%d",(*p).pin_number);printf("\n");

}
