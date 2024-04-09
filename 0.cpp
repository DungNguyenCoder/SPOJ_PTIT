#include <iostream>
#include <string>
using namespace std;
 
int N;
char banco[31][31];
char tg[4];
 
int isOutside (int i, int j)
{
	if (i<1 || N<i) return 1;
	if (j<1 || N<j) return 1;
	return 0;
}
 
int kt (char dk)
{
	for (int i=1; i<=3; i++)
	{
		if (tg[1]==tg[2] && tg[2]==tg[3] && tg[3]==dk) return 1;
	}
	return 0;
}
 
int layngang (int i, int j, char dk)
{
	int iNext = i;
	int jNext = j+2;
	if (isOutside (iNext, jNext)==1) return 0;
	else
	{
		tg[1]=banco[i][j];
		tg[2]=banco[i][j+1];
		tg[3]=banco[i][j+2];
		if (kt(dk)==1) return 1;
	}
	return 0;
}
 
int laydoc (int i, int j, char dk)
{
	int iNext = i+2;
	int jNext = j;
	if (isOutside (iNext, jNext)==1) return 0;
	else
	{
		tg[1]=banco[i][j];
		tg[2]=banco[i+1][j];
		tg[3]=banco[i+2][j];
		if (kt(dk)==1) return 1;
	}
	return 0;
}
 
int laycheo1 (int i, int j, char dk)
{
	int iNext = i+2;
	int jNext = j+2;
	if (isOutside (iNext, jNext)==1) return 0;
	else
	{
		tg[1]=banco[i][j];
		tg[2]=banco[i+1][j+1];
		tg[3]=banco[i+2][j+2];
		if (kt(dk)==1) return 1;
	}
	return 0;
}
 
int laycheo2 (int i, int j, char dk)
{
	int iNext = i+2;
	int jNext = j-2;
	if (isOutside (iNext, jNext)==1) return 0;
	else
	{
		tg[1]=banco[i][j];
		tg[2]=banco[i+1][j-1];
		tg[3]=banco[i+2][j-2];
		if (kt(dk)==1) return 1;
	}
	return 0;
}
 
int main ()
{
	//IN;
	cin>>N;
	string xau;
	for (int i=1; i<=N; i++)
	{
		cin>>xau;
		for (int j=1; j<=N; j++)
		{
			banco[i][j]=xau[j-1];
		}
	}
	for (int i=1; i<=N; i++)
	{
		for (int j=1; j<=N; j++)
		{
			if (banco[i][j]!='.')
			{
				char DK=banco[i][j];
				if (layngang (i, j, DK)!=0 || laydoc (i, j, DK)!=0 || laycheo1 (i, j, DK)!=0 || laycheo2 (i, j, DK)!=0)
				{
					cout<<DK;
					return 0;
				}
			}
		}
	}
	cout<<"ongoing";
	return 0;
}