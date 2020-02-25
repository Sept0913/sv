#include <bits/stdc++.h>
using namespace std;
ifstream fin("area.in");
ofstream fout("area.out");
int main(){
	int a,b,c;
	long long z,j;
	fin>>a>>b>>c;
	z=a*a;
	j=b*c;
	if(z>j) fout<<"Alice";
	else fout<<"Bob";
	return 0;
}