#include<stdio.h>
int main(){
int num,v,k,p,sum=0;
printf("enter the number:");
scanf("%d",&num);
v=num;

if(num>=100 && num<=999){
for(int i=1;i<4;i++){
    k=v%10;
    p=v/10;
    sum=sum+k*k*k;
    v=p;
}
if(sum==num){
    printf("%d is armstrong number",num);
}
else{printf("%d is not armstrong number",num);
}
}
else{
    printf("incorrect input");
}

    return 0;
}