#include<stdio.h>
#include<string.h>
int main(){
    char str[150];
    fgets(str,150,stdin);
    int i=1;
    int count=1;
    while(i<strlen(str)){
        if(str[i]==str[i-1]){
            count++;
            if(count>=7){
                printf("YES");
                return 0;
            }
        }
        else{
            count=1;
        }
        i++;
        
        
    }
    printf("N0\n");
    return 0;
}