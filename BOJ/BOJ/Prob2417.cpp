#include <cstdio>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
	ll n; scanf("%lld", &n);
	printf("%lld\n", (ll)ceill(sqrtl(n)));
}