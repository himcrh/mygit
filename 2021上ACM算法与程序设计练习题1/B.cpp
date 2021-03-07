#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		double a[n+5];
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			scanf("%lf",&a[i]);
		}
		sort(a+1,a+n+1);
		double num=0;
		for(int i=2;i<=n-1;i++){
			num+=a[i];
		}
		num/=(n-2)*1.0;
		printf("%.2lf\n",num);
	}
	return 0;
}