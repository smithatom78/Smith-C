#include <stdio.h>

int main() {
    int number;
    printf("Enter number!\n");
    scanf("%d",&number);
    if(number%2==0)
    {
printf("Number:%d is Even\n",number);
    }
    else
     {
printf("Number:%d is Odd\n",number);
    }
    return 0;
}
