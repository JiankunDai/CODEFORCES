
#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    long long a,b;
    int k;
    scanf("%d",&t);

    for(int i = 0; i < t; i++) {
        scanf("%lld%lld%d",&a,&b,&k);
        if(k % 2 == 0) {
            printf("%lld\n", a * (k / 2) - b * (k / 2));
        }
        else {
            printf("%lld\n", a * (k / 2 + 1) - b * (k / 2));
        }
    }
    return 0;
}
