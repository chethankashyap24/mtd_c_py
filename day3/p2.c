#include<stdio.h>

int main()
{
    float num = 5.5f;
    printf("Value of num = %f \n", num);
    printf("Address of num + %u \n", &num);//  adress we use unsigned int
    printf("value of num = %d" ,*(&num));
    return 0;
    
}