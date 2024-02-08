#include<stdio.h>
int main(){
int a;
printf("enter the number:");
scanf("%d",&a);
int p=a&1;
switch (p)
{
case 0:
    printf("it is a even number");
    break;
case 1:
printf("it is a odd number");
break;
}
    return 0;
}