#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n % 2!=0){
        printf("-1");
    }
    else{
        int arr [n];
        for(int i=0;i<n;i++){
            arr[i] = i+1;
        }
        int i=0,j=1;
        while(j<n){
            int temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
            i+=2;
            j+=2;
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;


}