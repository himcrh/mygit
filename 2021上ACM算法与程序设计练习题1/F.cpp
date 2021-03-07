#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int a[1010];
		memset(a,0,sizeof(a));
		int k,n;
		scanf("%d %d",&n,&k);
		if(!k){
			printf("\n");
			continue;
		}
		for(int i=1;i<=k;i++){
			for(int j=1;i*j<=n;j++){
				a[i*j] = a[i*j] ? 0 :1;
			}
		}
		for(int i=1;i<=n;i++){
			if(a[i])
				printf("%d ",i);
		}
		puts("");
	}
	return 0;
}