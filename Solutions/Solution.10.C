/* WAP to perform selection sort on array of 10 numeric value */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,p,t;
	clrscr();
	printf(" Enetr number of element\n");
	scanf("%d",&n);
	// logic : inpute element in array
	for(i=0; i<10; i++)
	{
		printf("\n Enter Value for element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	clrscr();
	for(i=0; i<(n-1);i++)//finding minimum element (n-1) times
	{
	p=i;
	for(j=i+1; j<n; j++)
	{
	if(a[p]>a[j])
	p=j;
	}
	if(p!=i)
	 {
	   t=a[i];
	 a[i]=a[p];
	 a[p]=t;
	 }
	 }
	 printf(" sorted list in ascending order:\n");
	 for(i=0; i<n; i++)
	 printf("%d\n",a[i]);
	 getch();
}


