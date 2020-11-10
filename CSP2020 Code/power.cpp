#include <cstdio>

using namespace std;
long long n, ans[10010];
int main(){
    freopen("power.in", "r", stdin);
    freopen("power.out", "w", stdout);
    scanf("%lld", &n);
    if(n % 2){
        printf("-1");
        return 0;
    }
    int cnt = 0;
	long long bj = 2;
	while(n){
		n >>= 1;
		if(n & 1) ans[++cnt] = bj;
		bj *= 2;
	}
	for(int i = cnt ; i >= 1 ; i--) printf("%lld ", ans[i]);
    return 0;
}
