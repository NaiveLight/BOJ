#include <iostream>

using namespace std;

int main()
{
	int tc;
	scanf("%d", &tc);

	while (tc--)
	{
		int n;
		scanf("%d", &n);
		
		int C = 0, tmpC = 0;
		float G = 0.0, tmpG = 0.0;

		for(int i = 0 ; i < n ; i++)
		{
			scanf("%d %f", &tmpC, &tmpG);
			C += tmpC;
			G += tmpG * tmpC;
		}

		printf("%d %.1f\n", C, G / (float) C);
	}
}