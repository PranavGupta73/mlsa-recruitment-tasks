#include<stdio.h>
int main(){
int n,m,ans=0;
scanf("%d %d",&n,&m);
char a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf(" %c",&a[i][j]);
    }
}
for(int i=0;i<n;i++){
    int j=n-1;
    if(a[i][j]=='R'){
        ans++;
    }
}
for(int j=0;j<n;j++){
    int i=n-1;
    if(a[i][j]=='D'){
        ans++;
    }
}
printf("%d",ans);

/*for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%c",a[i][j]);
    }
}*/
return 0;
}
