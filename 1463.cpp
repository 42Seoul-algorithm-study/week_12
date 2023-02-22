// 1로 만들기

#include <algorithm>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	int	n;
	int	cnt = 0;

	cin >> n;
	int	arr[n + 1];
	for (int i = 0; i <= n; i++)
		arr[i] = 0;
	arr[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int	cur = arr[i - 1] + 1;
		if (i % 3 == 0)
		{
			int	case3 = arr[i / 3] + 1;
			if (case3 < cur)
				cur = case3;
		}
		if (i % 2 == 0)
		{
			int case2 = arr[i / 2] + 1;
			if (case2 < cur)
				cur = case2;
		}
		arr[i] = cur;
		// cout << i << ": "<< cur << '\n';
	}
	cout << arr[n] - 1;
}
