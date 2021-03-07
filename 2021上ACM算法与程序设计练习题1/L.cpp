#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d",&n);
		int a[n+100];
		memset(a,0,sizeof(a));
		int x;
		scanf("%d",&x);
		bool flag = 1;
		for(int i=2;i<=n;i++){
			int y;
			scanf("%d",&y);
			if(abs(x-y)>n){
				flag = 0;
				continue;
			}
			a[abs(x-y)]=1;
			x=y;
		}
		
		for(int i=1;i<=n-1;i++){
			if(!a[i]){
				printf("Not jolly\n");
				flag = 0;
				break;
			}
		}
		if(flag){
			printf("Jolly\n");
		}
	}
	return 0;
}