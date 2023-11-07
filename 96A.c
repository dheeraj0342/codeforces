#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=1;
    int count=1;
    while(i<strlen(str)){
        if(str[i]==str[i-1]){
            count++;
            if(count>=7){
                printf("YES\n");
                return 0;
            }
        }
        else{
            count=1;
        }
        i++; 
        
    }
    printf("NO\n");
    return 0;
}