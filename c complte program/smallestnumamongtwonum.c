#include<stdio.h>
int main(){
    int num1,num2;

    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);

    if(num1<num2){
    printf("The smallest nuumber is:%d\n",num1);
    }else if(num1<num2){
    printf("The smallest number is:%d\n",num2);
    }else{
        printf("Both numbers are equal.\n");
    }

    return 0;
    
}
