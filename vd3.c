#include <stdio.h>
int vd3()
//int main()
{
    int num, res;

    printf("Enter a number:");
    scanf("%d, &num");
    res = num %2;

    if ( res==0)
        printf("The number is Even");
    else
        printf("The number is Odd");

}