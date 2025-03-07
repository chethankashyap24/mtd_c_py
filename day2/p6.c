#include<stdio.h>
int main()
{
    int inputnum=0,iter=0,ans=0;
    puts("Enter a input:");
    scanf("%d", &inputnum);
    for(iter=1;iter<=10;iter++)
    {
        ans = inputnum * iter;
        printf("%d x %02d = %03d\n",inputnum,iter,ans);

    }
    return 0;
}