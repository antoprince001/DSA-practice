/*
Write a code to check whether no is prime or not. 
Condition use function check() to find whether entered no is positive or negative ,if negative then enter the no, 
And if yes pass no as a parameter to prime() and check whether no is prime or not?
*/

#include<stdio.h>
void check(int a){
    
    int flag=0;
    for(int i=2;i*i < a;i++){
        if(a%i == 0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is not a prime number",a);
    }else{
        printf("%d is a prime number",a);
    }
}
int main(){
    int num;
    
    printf("Enter no : ");
    scanf("%d",&num);
    
    if(num<0){
        printf("Please enter a positive integer ");
        return 0;
    }
    
    check(num);
    return 0;
}
