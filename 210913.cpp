#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "두 수를 입력하라 : ";
	cin >> a >> b;
	cout << "큰 수 : ";
	if (a < b)
		cout << b;
	else
		cout << a;

	return 0;
}