#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char line[1000],c;
    int i;
    scanf("%s",line);
    for(i=0;line[i]!='\0';i++){
        c=line[i];
        c=c-3;
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
