#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		string c;
		int a[12];
		cin>>c;
		memset(a,0,sizeof(a));
		for(int i=0;i<c.length();i++){
			a[c[i]-'0']++;
			//printf("c[%d]-'0'=%d\n",i,c[i]-'0');
		}
		string d;
		cin>>d;
		for(int i=0;i<d.length();i++){
			a[d[i]-'0']--;
		}
		bool flag = true;
		for(int i=1;i<=9;i++){
			if(a[i]){
				printf("No\n");
				flag = false;
				//printf("a[%d]=%d\n",i,a[i]);
				break;
			}
		}
		if(flag){
			printf("Yes\n");
		}
	}
	return 0;
}