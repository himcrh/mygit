#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
//sourcetree test
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a[4];
		memset(a,0,sizeof(a));
		for(int i=1;i<=3;i++){
			scanf("%d",&a[i]);
		}
		sort(a+1,a+4);
		if(a[1]!=a[2]&&a[2]!=a[3]){
			printf("%d\n",a[2]);
		}
		else{
			printf("%d\n",a[3]);
		}
	}
	return 0;
}