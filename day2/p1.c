#include<stdio.h>
int main()
{
    int a=3, b=-2, c=8;
    b++;
    printf("%d %d %d\n",a,b,c);
    ++b;
    printf("%d %d %d\n",a,b,c);
    c=a--;
    printf("%d %d %d\n",a,b,c);

    return 0;
}
