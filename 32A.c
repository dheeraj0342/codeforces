#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if( (i!=j)&& (abs(arr[i]-arr[j])<=d)){
            cnt++;
        }
       }
    }
    printf("%d\n",cnt);
    return 0;
}

