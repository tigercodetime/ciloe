#include <stdio.h>
int hw4()
//int main()
{
    char c;
    printf("Loai nhan vien cua ban la:");
    scanf("%c",&c);
    switch (c) {
        case'A':
            printf("Muc tro cap cua ban la:300");
            break;
        case'B':
            printf("Muc tro cap cua ban la:250");
            break;
        default:
            printf("Muc tro cap cua ban la:100");
            break;


    }





}