#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[1000010];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m;
		scanf("%d %d",&n,&m);
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		sort(a+1,a+n+1);
		for(int i=n;i>n-m;i--){
			printf("%d ",a[i]);
		}
		puts("");
	}
	return 0;
}