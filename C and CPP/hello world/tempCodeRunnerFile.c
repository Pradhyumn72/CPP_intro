#include<stdio.h>
#include<stdlib.h>
void sum ()
{
    int a, b, sum = 0;
    printf("Enter two numbers:");
    scanf("%d %d , &a ,&b");
    sum= a + b;
    printf("Sum = %d\n %d, sum");

}

int main()
{
sum();
return 0;
}