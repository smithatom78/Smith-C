#include <stdio.h>

int main() {
    int number,factorial=1;
    printf("Enter number!\n");
    scanf("%d",&number);
    if(number>0)
    {
    for (int i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
        printf("Factorial of :%d is %d",number,factorial);
     } else if(number==0)

    printf("Factorial of :%d is %d",number,factorial);
    else
    
    printf("Enter a valid number");
    return 0;
}
