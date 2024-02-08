#include<stdio.h>
int main(){
int a,b,c;
printf("enter three number :");
scanf("%d %d %d",&a,&b,&c);
switch(a>b){
case 1:
switch (a>c){
case 1:
printf("%d is greatest",a);
break;
case 0: 
printf("%d is greatest",c);
}
break;
case 0:
switch (b>c){
case 1:
printf("%d is greatest",b);
break;
case 0:
printf("%d is greatest",c);}}
return 0;
}