#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int burger = 2e9, drink = 2e9;
	int tmp = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &tmp);
		if (burger > tmp)
			burger = tmp;
	}

	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &tmp);
		if (drink > tmp)
			drink = tmp;
	}
	cout << burger + drink - 50 << endl;
}