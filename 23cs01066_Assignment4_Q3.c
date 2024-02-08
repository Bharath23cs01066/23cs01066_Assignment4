#include<stdio.h>
int main(){
float b, src;
printf("enter the balance:");
scanf("%f",&b);
printf("enter credit score:");
scanf("%f",&src);
if(src<600){
    printf("interest= %.2f",0.15*b);

}
else if(src>=600 && src<=750){
    printf("interest=%.2f",0.12*b);
}
else if(src>750){
    printf("interest= %.2f",b/10);

}

    return 0;
}