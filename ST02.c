#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char line[1000];
    int i;
    int ans=0;
    while(fgets(line,1000,stdin)!=NULL){
        line[strlen(line)-1]='\0';
        i=0;
        ans=(line[i]-'A')+1;
        for(i=1;line[i]!='\0';i++){
            ans=(line[i]-'A')+1+ans*26;
        }
        printf("%d\n",ans);
        ans=0;
    }
    return 0;
}
