#include<stdio.h>
#define MAX 15
int main(){
    char buf[MAX];
    fgets(buf,MAX,stdin);
    printf("String is %s",buf);

    char str_1[MAX];
    gets(str_1);
    printf("String 2 is %s",str_1);

    return 0;
}