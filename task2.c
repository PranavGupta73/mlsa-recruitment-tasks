#include<stdio.h>
int check(char c, char b[], int k) {
    for(int i=0; i<k; i++) {
        if(c == b[i]) {
            return 1;
        }
    }
    return 0;
}
int main()
{
int n,k,i;
scanf("%d %d",&n,&k);
char a[n];
char b[k];
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<k;i++)
{
scanf("%c",&b[i]);
}
int ans=0;
for(i=0; i<n; i++) {
      int j = i;
        while(check(a[j], b, k)) {
            ans++;
            j++;
        }
    }
printf("%d",ans);
    return 0;
}








