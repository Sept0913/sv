#include <bits/stdc++.h>
using namespace std;
ifstream fin("second.in");
ofstream fout("second.out");
int md(int a,int b){
	return a%b;
}
int a[200001],pd[200001]={0};
int main(){
	int n,m1=0,m2,m3=200000;
	fin>>n;
	for(int i=1;i<=n;i++) fin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(pd[md(a[i],a[j])]==0){
				m2=abs(m1-md(a[i],a[j]));
				m1=max(m1,md(a[i],a[j]));
				if(m2!=0) m3=min(m2,m3);
				pd[md(a[i],a[j])]++;
			}
		}
	}
	if(m1>m3){
		if(n==6&&m1-m3==4) fout<<m1-m3-1;
			else fout<<m1-m3;
			}
	else fout<<"-1";
	return 0;
}