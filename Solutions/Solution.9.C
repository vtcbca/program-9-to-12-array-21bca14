/* WAP to Perform the bubble sort on array of 10 numeric value. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	clrscr();
	// logic : inpute element in array
	for(i=0; i<10; i++)
	{
		printf("\n Enter Value for element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	clrscr();
	// Logic: print Original array
	for(i=0; i<10; i++)
		printf("\n a[%d]=%d",i,a[i]);
	getch();
}