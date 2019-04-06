#include <stdio.h>
int longest_plateau(int x[], int n);
void main()
{
	int a[1000], n, i,length;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	length = longest_plateau(a,n);
	printf("\n最大平台为  %d\n",length);
}
int longest_plateau(int x[], int n)
{
	int length = 1;
	int i,j=1;
	for (i = 1; i < n; i++)
	{
		if (x[i] == x[i-j])
		{
			j++;
		}
		else
		{
			j = 1;
		}
		if (length < j)
		{
			length = j;
		}
	}
	return length;
}

