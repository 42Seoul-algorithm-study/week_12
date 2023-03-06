// 계단 오르기

#include <iostream>
#include <cstring>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;

	cin >> n;
	int arr[n], res[n];
	memset(res, 0, sizeof(res));
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	res[0] = arr[0];
	res[1] = arr[0] + arr[1];
	res[2] = max(arr[0] + arr[2], arr[1] + arr[2]); // 세번 연속으로 밟을 수 없다

	for (int i = 3; i < n; i++) // n-2 까지의 최댓값 + n번 계단, n-3 까지의 최댓값 + n-1, n번 계단
		res[i] = max(res[i - 2] + arr[i], res[i - 3] + arr[i - 1] + arr[i]);
	cout << res[n - 1];
}

