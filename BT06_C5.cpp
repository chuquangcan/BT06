#include <iostream>
#include <vector>

using namespace std;

vector <int> vc;
int sum = 0;
int m;

void print(vector<int> a)
{
	for (int i=0; i<a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void sum_num(int n)
{
	if (sum==m)
		print(vc);
	for (int i=n; i>=1; i--)
	{
		vc.push_back(i);
		sum+=i;
		if (sum<=m)
			sum_num(n-i);
		sum-=i;
		vc.pop_back();
	}
}

int main ()
{
	int n;
	cin >> n;
	m = n;
	sum_num(n);
}
