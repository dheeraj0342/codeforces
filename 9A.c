#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max = a>b ? a : b;
    int n = 6-max +1;
    int d = 6;
    if(n == 2 || n==4){
        n /=2;
        d/=2;
    }
    else if(n==3){
        n/=3;
        d/=3;
    }
    else if(n==6){
        n/=6;
        d/=6;
    }
    printf("%d/%d",n,d);
    return 0;
}