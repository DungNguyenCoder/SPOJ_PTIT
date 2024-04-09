#include <iostream>
#include<string.h>
#include <math.h>
using namespace std;
int main()
{
	long a[1000];
	int n;
	cin >> n;
	int b = 1;
	while (n != 0)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int i = 0;
		int count;
		while (1)
		{
			int e = 0;
			count = 0;
			while(e<n-1)
			{
				if (a[e] == a[e + 1])
				{
					count++;
					e++;
				}
				else
				{
					break;
				}
			}
			if ((count == n - 1) || i == 1000)
				break;
			else
				i++;
			a[n] = a[0];
			for (int j = 0; j < n; j++)
			{
				a[j] =a[j] - a[j + 1];
				if (a[j] < 0)
					a[j] = a[j] * (-1);
			}
		}
		if (i == 1000)
			cout << "Case " << b << ": not attained"<<endl;
		else if(count == n-1)
			cout << "Case " << b << ": " << i << " iterations" << endl;
		cin >> n;
		b++;
	}
	return 0;
}