//#include <iostream>
//
//using namespace std;
//
//int a[500001];
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//
//	int i;
//	bool change = false;
//	for (i = 1; i <= n + 1; i++) {
//		change = false;
//		for (int j = 1; j <= n - i; j++) {
//			if (a[j] > a[j + 1]) {
//				change = true;
//				swap(a[j], a[j + 1]);
//			}
//		}
//		if (change == false) {
//			break;
//		}
//	}
//	cout << i << '\n';
//
//	return 0;
//}