#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int ans = (n *3) - k;
    if(ans >0){
        printf("%d",ans);
    }
    else{
        printf("0");
    }
    return 0;
}