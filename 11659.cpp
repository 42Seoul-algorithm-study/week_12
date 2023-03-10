// 구간 합 구하기 4

#include <iostream>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n, m;

	cin >> n >> m;
	int	arr[n + 1];
	arr[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int	tmp;
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
	// for (int i = 0; i < m; i++)
	// 	cout << arr[i] << '\n';
	for (int k = 0; k < m; k++)
	{
		int	i, j;
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << '\n';
	}
}
