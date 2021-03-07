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
		char a[120][120];
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			getchar();
			for(int j=1;j<=n;j++){
				scanf("%c",&a[i][j]);
			}
			
		}
		for(int i=1;i<=n;i++){
			for(int j=n;j>=1;j--){
				printf("%c",a[j][i]);
			}
			puts("");
		}
	}
	return 0;
}