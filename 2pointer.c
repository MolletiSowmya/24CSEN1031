// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=10;
    int *ptr=&num;
    printf("Address of num=%u\n",&num);
    printf("Value of pointer=%u\n",ptr);
    printf("Address of pointer=%u\n",&ptr);
    printf("Address of pointer=%u\n",*ptr);
    printf("value of num = %d\n",num);

    return 0;
}
