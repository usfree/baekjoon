#include <iostream>
using namespace std;

int main(void)
{
	int N;

	cin >> N;
	for (int i = N; i > 0; i--)
	{
		for (int k = N - i; k > 0; k--)
			cout << " ";
		for (int j = i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
}