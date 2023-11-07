#include<stdio.h>
int isprime(int a){
    for(int i=2;i<a;i++){
        if(a % i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int ans=0;
    for(int i=6;i<=a;i++){
        int cnt=0;
        int prev=1;
        for(int j=2;j<=i;j++){
            int n=i;
            while((n%j==0) && (n!=1)){
            n=n/j;
            if((isprime(j)) && (prev!=j)){
                cnt++;
                prev=j;
            }
        }
        }
        if(cnt==2){
            ans++;
        }
        }
        printf("%d",ans);
         return 0;
    }
   

