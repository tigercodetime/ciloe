//
// Created by Laptop K1 on 9/22/2023.
//
#include <stdio.h>
int vd5()
//int main()
{
    int x;
    x= 0;

    printf("Enter Choice (1 - 3):");
    scanf("%d", &x);

    if (x==1)
        printf("\nChoice is 1");
    else if ( x==2)
        printf("\nChoice is 2");
    else if ( x==3)
        printf("\nChoice is 3");
    else
        printf("\nInvalid Choice: Invalid Choice");

}