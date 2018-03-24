#include<stdio.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int prime[2000005],primep;
bool isprime[2000005];
void initprime(int N){
    primep = 0;
    memset(isprime,1,sizeof(isprime));
    isprime[1]=false;
    for(int i=2;i<=N;i++){
        if(isprime[i])prime[primep++]=i;
        for(int j=0;j<primep&&i*prime[j]<=N;j++){
            isprime[i*prime[j]]=false;
            if(i%prime[j]==0)break;
        }
    }
}
int main(){
    // use linear sieve.
    initprime(2000000);
    ll res = 0;
    for(int i=0;i<primep;i++)res+=prime[i];
    printf("%lld\n",res);
    return 0;
}
