#include<stdio.h>
int main(){
    int n;
    int cap;
    scanf("%d %d",&n,&cap);
    int sum = (n *(n+1))/2;
    cap = cap % sum;
    int i=1;
    while(cap-i>=0){
        cap=cap-i;
        i++;
    }
    printf("%d\n",cap);
    return 0;
}