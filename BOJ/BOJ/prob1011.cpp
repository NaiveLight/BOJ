#include <cstdio>
#define ll long long

using namespace std;

int main()
{
	int tc;
	scanf("%d", &tc);

	while (tc--)
	{
		ll x, y;
		ll ans = 0;
		ll k, powK, minK, maxK;

		scanf("%lld %lld", &x, &y);
		
		ll dist = y - x;
		
		for (k = 1;; k++)
		{
			powK = k*k;
			minK = powK - k;
			maxK = powK + k;

			if (minK <= dist && dist <= maxK)
			{
				if (dist <= powK)
					ans = (k<<1) - 1;
				else
					ans = (k<<1);

				break;
			}
		}

		printf("%lld\n", ans);
	}
	
	return 0;
}