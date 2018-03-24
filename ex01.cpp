#include<stdio.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main(){
    ll res = 0;
    for(int i=3;i<1000;i++){
        if(i%3==0 || i%5==0){res+=i;}
    }
    printf("%d\n",res);
    return 0;
}
