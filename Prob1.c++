#inlcude<iostream.h>
Void main()
{
int i,sum=0;
for(i=0;i<=1000;i++)
{
if(i%3==0||i%5==0)
{
sum=sum+i;
}
}
cout<<"the sum of multiples of 3 or 5 ="<<sum;
}
