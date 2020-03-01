#include <bits/stdc++.h>
using namespace std;
#define RICH 1000000000
typedef long long LL;
bool Is_ly(LL y){
	return !(y%400)||y%100&&!(y%4);
}
int Day_m(LL y,LL m){
	if(m==2){
		if(Is_ly(y)) return 29;
		return 28;
	}
	if(m==4||m==6||m==9||m==11) return 30;
	return 31;
}
LL To_d(LL n){
	n=RICH-n;
	LL sum=sqrt(n)+1;
	LL i=sum*(sum+1)/2;
	if(i==n) return sum;
	if(n==1) return 1;
	if(n<4) return 2;
	if(n<6) return 3;
	while(i<n){
		sum++;
		i+=sum;
	}
	if(i==n) return sum;
	return sum;
}
int main(){
	LL money,y,m,d,t;
	scanf("%lld",&t);
	for(LL a=0;a<t;a++){
	    scanf("%lld%lld%lld%lld",&money,&y,&m,&d);
	    LL n=To_d(money);
	    d+=n;
	    for(;d>Day_m(y,m);){
		    if(d>Day_m(y,m))
			    d-=Day_m(y,m);
			    if(m==12){
				    y++;
				    m=1;
			    }
			    else m++;
	    }
	    printf("%lld %lld %lld\n",y,m,d);
    }
	return 0;
}
