#include <stdio.h>
int hw5()
//int main()
{
    int n;
    printf("Nhap so diem cua ban:");
    scanf("%d",&n);
    if (n>=75){
        printf("\nLoai A");
    }
    else if (n>=60 && n<75){
        printf("\nLoai B");
    }
    else if (n>=45 && n<60){
        printf("\nLoai C");
    }
    else if (n>=35 && n<45){
        printf("\nLoai D");
    }
    else if (n<35){
        printf("\nLoai E");
    }
    else{
        printf("Khong co du lieu");
    }





}