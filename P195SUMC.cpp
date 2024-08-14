#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int cnt25 = 0, cnt50 = 0, cnt100 = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int check = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 25)	++cnt25;
		else if (a[i] == 50)
		{
			if (cnt25)
			{
				--cnt25;
				++cnt50;
			}
			else
			{
				check = 0;
				printf("NO");
				return 0;
			}
		}
		else if (a[i] == 100)
		{
			if (cnt50)
			{
				if (cnt25)
				{
					--cnt50;
					--cnt25;
				}
				else
				{
					printf("NO");
					check = 0;
					return 0;
				}
			}
			else
			{
				if (cnt25 >= 3)
				{
					cnt25 -= 3;
				}
				else
				{
					printf("NO");
					check = 0;
					return 0;
				}
			}
		}
	}
	if (check)	printf("YES");
}