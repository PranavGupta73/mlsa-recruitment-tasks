#include<stdio.h>
int main()
{
int x,y,z,rem,d;
scanf("%d %d %d",&x,&y,&z);
rem=y%x;

d=rem+z;
if(d>=x||rem==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;

}
