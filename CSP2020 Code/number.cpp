#include <cstdio>
#include <algorithm>

using namespace std;
int n, m, ans = -1919810, nm = 0;
int a[1010][1010];
bool v[1010][1010] = {0};
void SS(int x, int y){
	if(v[x][y] || (x < 1 || y < 1 || x > n || y > m)) return;
	v[x][y] = 1;
	nm += a[x][y];
	SS(x, y + 1);
	SS(x + 1, y);
	SS(x - 1, y);
	if(x == n && y == m)
		ans = max(ans, nm);
	nm -= a[x][y];
}
int main(){
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= m ; j++)
			scanf("%d", &a[i][j]);
	SS(1, 1);
	printf("%d", ans);
    return 0;
}
