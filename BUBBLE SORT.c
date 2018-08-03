#include<stdio.h>
#include<conio.h>
void bubble_sort(int [],int);
int main()
{
	int n,value[30],i;
	printf("\n Enter the size of arry :");
	scanf("%d",&n);
	printf("\n Enter the value of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&value[i]);
	}
	bubble_sort(value,n);
	printf("\n The Sorted Result :");
	for(i=0;i<n;i++)
	printf("%d\t",value[i]);
	
	
}
void bubble_sort(int list[],int n)
{
	int i ,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(list[j]>list[j+1])
			{
//				list[j+1]=list[j]+list[j+1];
//				list[j]=list[j+1]-list[j];
//				list[j+1]=list[j+1]-list[j];
				list[j]=list[j]+list[j+1];
				list[j+1]=list[j]-list[j+1];
				list[j]=list[j]-list[j+1];
				
				
			}
		}
	}

}
