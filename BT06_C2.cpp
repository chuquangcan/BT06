#include <iostream>

using namespace std;

char c[255];

bool check[255];

void print(int k)
{
	for (int i=1; i<=k; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
}

void hoanvi(int n, int k, int j)
{
	for (int i=0; i<n; i++)
	{
		if (!check[97+i])
		{
			c[j] = char(97+i);
			check[97+i] = true;
			if (j==k)
			{
				print(k);
			}
			else 
			{
				hoanvi(n, k, j+1);
			}
			check[97+i] = false;
		}
	}
}


int main()
{
	int n, k;
	cin >> n >> k;
	for (int i=0; i<255; i++)
	{
		check[i] = false;
	}
	hoanvi(n, k, 1);
}
