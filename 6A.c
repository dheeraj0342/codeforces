#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[4]={a,b,c,d};
    for(int i=0;i<3;i++){
        for(int j=0;j<3-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if(arr[0]+arr[1] > arr[2] || arr[1]+arr[2]>arr[3]){
        printf("TRIANGLE");
    }
    else if(arr[0]+arr[1]==arr[2] || arr[1]+arr[2]==arr[3]){
        printf("SEGMENT");
    }
    else{
        printf("IMPOSSIBLE");
    }
    return 0;
}