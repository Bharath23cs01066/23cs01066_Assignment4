#include<stdio.h>
int main(){
int age;
printf("enter age:");
scanf("%d",&age);
if(age<5 ){
    printf("free ticket");

}
else if(age>=5 && age<=12){
    printf("ticket cost= %d",20);

}
else if(age>12 && age<=59){
    printf("ticket cost= %d",50);
}
else if(age>=60){
    printf("ticket cost= %d",40);
}
    return 0;
}