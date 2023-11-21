#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int num[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if((sum-num[i])%2==0)
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}