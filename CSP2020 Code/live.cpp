#include <cstdio>
#include <algorithm>

using namespace std;
int n, w;
int a[100010];
int main(){
    freopen("live.in", "r", stdin);
    freopen("live.out", "w", stdout);
    scanf("%d%d", &n, &w);
	for(int i = 0 ; i < n ; i++) scanf("%d", &a[i]);
    for(int i = 1 ; i <= n ; i++){
        int no = i * w / 100;
        if(no == 0) no = 1;
		no = i - no;
	    nth_element(a , a + no, a + i);
	    if(i) printf("%d ", a[no]);
    }
    return 0;
}
