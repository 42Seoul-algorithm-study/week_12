// 2xn 타일링

#include <iostream>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;

	cin >> n;
	int	dp[1000];
	dp[0] = 1;
	dp[1] = 2;
	for (int i = 2; i < n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= 10007;
	}
	cout << dp[n - 1];
}
