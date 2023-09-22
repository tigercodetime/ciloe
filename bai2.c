#include <stdio.h>
int hw2()
//int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (a * b >= 1000) {
        printf("tich a va b lon hon 1000\n");
    } else {
        printf("tich a va b khong lon hon 1000\n");
    }
    return 0;
}