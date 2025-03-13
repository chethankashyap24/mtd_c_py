#include<stdio.h>
 // behaviour of an address 
 int main()
 {
    int num = 30.11;
    printf("%u %u %u %u ", &num -1, &num, &num+1, &num+2);
    return 0;
 }