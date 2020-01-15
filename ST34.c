#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    char line[101];
    char c;
    int alpha[26]={0};
    int i=0,a;

    scanf("%s",line);
    i=0;

    for(i=0;line[i]!='\0';i++){
        c=line[i];
        if(isalpha(c)){
            c=tolower(c);
            a=c-'a';
            alpha[a]++;
        }
    }

    for(i=0;i<26;i++)
        printf("%d\n",alpha[i]);
    return 0;
}
