#include<stdio.h>
int main()
{
int number,n1,n2,i,rem,temp;
printf("enter two numbers;");
scanf("%d%d",&n1,&n2);
printf("armstrong num between %d and %d are:"n1'n2);
for(i=1+1;i<n2;++i)
{
temp=i;
num=0;
while(temp i=0);
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if (i==num)
{
printf("%d",i);
}
}
return 0;
}
