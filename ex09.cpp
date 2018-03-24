#include<stdio.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main(){
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000-i;j++){
            int k=1000-i-j;
            if(i*i+j*j==k*k){
                ll A = i; A*=j; A*=k;
                printf("%lld\n",A);
            }
        }
    }
    return 0;
}
