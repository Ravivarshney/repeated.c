#include<stdio.h>
void main()
{
int n,a[10000],i,j,s,c;
scanf("%d",&n);
if (n>0)
{
for (i=1;i<=n;i++)
{scanf("%d",&a[i]);}
for (i=1;i<n;i++)
{for (j=i+1;j<=n;j++)

{
    if(a[j-1]>a[j])
			{
				s=a[j-1];
				a[j-1]=a[j];
				a[j]=s;
	}}}for (i=1;i<n;i++)
{for (j=i+1;j<=n;j++)

{
    if (a[i]==a[j])
{printf("%d",a[i]);
c++;
}




}}

}
if (c==0)
    printf("unique");
}



