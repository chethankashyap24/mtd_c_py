//Accept the number from the user and check if it is even
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("It is even");
    }
    else
    {
        printf("It is odd");
    }
    return 0;
}