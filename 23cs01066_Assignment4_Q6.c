#include<stdio.h>
int main(){
float num1,num2;
char f;
printf("enter first number:");
scanf("%f",&num1);
printf("enter second number:");
scanf("%f",&num2);
printf("enter the operator:");
scanf(" %c",&f);

switch(f){
case '+':
printf("%.2f",num1+num2);
break;
case '-':
printf("%.2f",num1-num2);
break;
case '*':
printf("%.2f",num1*num2);
break;
case '/':
printf("%.2f",num1/num2);
break;
default:
printf("please enter valid operator");

}

    return 0;
}