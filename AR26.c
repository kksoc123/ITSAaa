#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i,j,k,n,amount;
    int boy=0,girl=0;
    scanf("%d%d",&n,&amount);
    int people[amount];
    for(i=0;i<n;i++){
        for(j=0;j<amount;j++){
            scanf("%d",&people[j]);
        }
        for(j=0;j<amount;j++){
            if(people[j]==0)
                girl++;
            else
                boy++;
        }
    }
    if(girl>boy)
        printf("0\n");
    else if(girl<boy)
        printf("1\n");
    else
        printf("2\n");
    return 0;
}
