#include<stdio.h>
int main(){
    long long int n,m,a,ans;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n % a ==0 )
         n /=a;
    else
        n = n/a +1;    
    if(m % a==0)
        m/=a;
    else
        m =m/a+1;  
     ans = n*m;      
    printf("%lld",ans);
    
    return 0;
}