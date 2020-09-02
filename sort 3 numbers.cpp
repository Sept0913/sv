#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,x,y,z;
	cin>>a>>b>>c;
	if (a<b) x=a;else x=b; 
	if (x>c) x=c;
	if (a>b) z=a;else z=b; 
	if (z<c) z=c;
	y=a+b+c-x-z;
	cout<<x<<"<"<<y<<"<"<<z;
	return 0;
}
