#include<stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		string x;
		cin>>x;
		int even=0,odd = 0;
		for(int i=0;i<x.length();i++){
			if(i%2){
				odd+=(x[i]-'0');
			}
			else{
				even+=(x[i]-'0');
			}
		}
	//	printf("odd=%d\n",odd);
	//	printf("even=%d\n",even);
		if((odd+even)%3){
			printf("No ");
		}
		else{
			printf("Yes ");
		}
		if(abs(odd-even)%11){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}
	return 0;
}