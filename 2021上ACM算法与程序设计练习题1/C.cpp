#include<stdio.h>
#include<algorithm>
using namespace std;
int gcd(int x,int y){
	if(y==0)	return x;
	return gcd(y,x%y);
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d %d\n",gcd(a,b),a*b/gcd(a,b));
	}
	return 0;
}