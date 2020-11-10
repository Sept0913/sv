#include <cstdio>
#include <stack>

using namespace std;
stack <int> S;
char s[10010];
int n, q, t;
bool v[100010];
bool ct(){
	while(!S.empty()){
	    int t = S.top();
	    S.pop();
	    if(t >= '1' &&
int main(){
    freopen("expr.in", "r", stdin);
    freopen("expr.out", "w", stdout);
	while(scanf("%s", s)){
		if(s[0] == 'x') S.push_back(s[1]);
		else S.push_back(s[0]);
	}
	scanf("%d%d", &n, &q);
	for(int i = 1 ; i <= n ; i++) 
    return 0;
}
