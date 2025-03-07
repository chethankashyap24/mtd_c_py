#include <stdio.h>
#include <math.h>
int main()
{
    int avgscore=0;
    puts("Enter avg score to print results:");
    scanf("%d", &avgscore);
    if(avgscore >= 0 && avgscore<=40)
        puts("Fail");
    else if(avgscore >= 41 && avgscore<=70)
        puts("First class");
    else if(avgscore >= 71 && avgscore<=85)
        puts("Distinction");
    else if(avgscore >= 86 && avgscore<=100)
        puts("Topper");
    else
        puts("Error");
    return 0;
}
