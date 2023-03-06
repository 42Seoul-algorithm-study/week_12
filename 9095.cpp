// 1 2 3 더하기

#include <algorithm>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int	t;

	cin >> t;
	int	n[t];
	int	max;
	for (int i = 0; i < t; i++)
	{
		cin >> n[i];
		if (i == 0 || max < n[i])
			max = n[i];
	}
	int	arr[max + 1];
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= max; i++) // 점화식이 구해진다
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];

	for (int i = 0; i < t; i++)
		cout << arr[n[i]] << '\n';
}
