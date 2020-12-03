#include<stdio.h>
int hcf(int a,int b){
    if(a==b)
        return a;
    if(a==0 || b==0)
        return 0;
    if(a>b)
        return hcf(a - b, b);
    return hcf(a, b - a);
}
int div(int x, int y)
{
    while (hcf(x, y) != 1) {
        x = x / hcf(x, y);
    }
    return x;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
int ans= div(a,b);
printf("%d",ans);
}
