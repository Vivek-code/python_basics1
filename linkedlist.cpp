#include<iostream>
using namespace std;
int main()
{
	int power(int a, int b)
	{
		in t ans = 1;
		for (int i = 0; i < b; i++)
		{
			ans = ans * a;
		}
		return ans;
	}
	cout << power(2, 5) << endl;
	cout << power(6, 6) << endl;
	cout << power(100, 5) << endl;
}