#include<bits/stdc++.h>

using namespace std;

const int N = 100 + 5;

int a[N];

int main(){
    int n;
    int count = 0;
    scanf("%d",&n);
    a[0]=0;a[n]=0;
    for(int i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
    }

    for(int i = 1; i <= n; i++) {
        if(a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {
            a[i + 1] = 0;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
