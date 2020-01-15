#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int cmp(const void *a,const void *b){
    return(*(int*)b-*(int*)a);
}
int main(){
    int i,n,nth,total;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&total,&nth);
        int line[total];

        for(i=0;i<total;i++){
            scanf("%d",&line[i]);
        }

        qsort(line,total,sizeof(int),cmp);

        printf("%d\n",line[nth-1]);
    }
    return 0;
}
