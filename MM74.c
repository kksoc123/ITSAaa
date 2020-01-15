#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,total=0;
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        if(i%2==1)
            total+=i;

    }
    printf("%d\n",total);
    return 0;
}
