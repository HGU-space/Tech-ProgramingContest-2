#include<stdio.h>
#include<string.h>
int main(void){
    char str1[101];
    char str2[51];

    scanf("%s %s", str1, str2);
    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}