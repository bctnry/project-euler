#include<stdio.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main(){
    ll a = 1, b = 2;
    ll res = 0;
    while(a<=4000000){
        if(!(a%2))res+=a;
        int x=a; a=b; b=x+b;
    }
    printf("%d\n",res);
    return 0;
}
