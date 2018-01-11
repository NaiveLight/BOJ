#include <cstdio>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}

	sort(v.begin(), v.end());


	ll sum = 0LL;

	int i, j;
	
	//���� ����
	for (i = 0; i < n - 1 && v[i + 1] < 1; i += 2)
		sum += (ll)v[i] * v[i + 1];

	//��� ����
	for (j = n - 1; j > 0 && v[j - 1] > 1; j -= 2)
		sum += (ll)v[j] * v[j - 1];

	//���� �κ� ���ϱ�
	for (; i <= j; i++)
		sum += (ll)v[i];

	printf("%lld\n", sum);

	return 0;
};