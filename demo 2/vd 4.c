#include <stdio.h>
int d4_scanf(){
    int a;
    float d = 123.123456;
    printf("float 123.123456: %e",d);
    char fullname[100];
    gets(fullname);
    printf("fullname: %s\n",fullname);
    char ch, name[40];
    printf("please enter thedatata\n");
    scanf("%d %f %c %s",&a,&d,&ch,name);
    printf("\n The valunes accepted are:%d,%f,%c,%s",a, d,ch,name);
    return 0;
}