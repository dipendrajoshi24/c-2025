 #include<stdio.h>
 void main(){
 int n, cube; 

    printf("Enter an integer to find its cube: ");
    scanf("%d", &n); 
    cube = n * n * n;

    printf("The cube of %d is: %d\n", n, cube);

}