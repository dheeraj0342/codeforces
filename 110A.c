#include<stdio.h>
#include<string.h>
int main(){
    char num[105];
    scanf("%s",num);
    int cnt=0;
    for(int i=0;i<strlen(num);i++){
        if(num[i]=='4' || num[i]=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}