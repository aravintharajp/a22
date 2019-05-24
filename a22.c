void main()
{
unsigned long n,t,a[10000],i,j;
scanf("%lu",&n);
if(n<1||n>100000)
{
printf("Invalid");
exit(1);
}
for(i=0;i<n;i++)
scanf("%lu",&a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i]<a[j])
 {
  t=a[j];
  a[j]=a[i];
  a[i]=t;
 }
 }
}
printf("%lu",a[n-1]);
}
