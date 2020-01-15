#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int num[n],temp;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(num[j]<num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d %d\n",i+1,num[i]);
    return 0;
}
