#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        string d;
        cin>>d;
        int ans = 0;
        getchar();
        while (n--){
            char c[200];
            memset(c,0,sizeof(c));
            cin.getline(c,200);
            c[-1]=' ';
            for(int i=-1;i<=125;i++){
                if(c[i]!=' ')
                    continue;
                bool flag = 0;
                for(int j=0;j<d.size();j++){
                    if(c[i+j+1]!=d[j]){
                        flag = 1;
                        break;
                    }
                }
                if(!flag){
                    if(c[i+1+d.size()]==' '||c[i+1+d.size()]=='\n'||c[i+1+d.size()]==0){
                        ans++;
                        break;
                    }
                   
                }
            }
        }
        if(ans)
            printf("%d\n",ans);
        else
            printf("Do not find\n");
        puts("");
    }
    return 0;
}