// rgb거리

#include <iostream>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);
	int	n;

	cin >> n;
	int	board[n][3];
	int	res[n][3];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> board[i][j];
	for (int i = 0; i < 3; i++) // 첫번째 초기화
		res[0][i] = board[0][i];
	for (int i = 1; i < n; i++)
		for (int j = 0; j < 3; j++) // 나머지 두개중 작은거 + 그 자리의 숫자
			res[i][j] = min(res[i - 1][(j + 1) % 3], res[i - 1][(j + 2) % 3]) + board[i][j];
	cout << min(min(res[n - 1][0], res[n - 1][1]), res[n - 1][2]);
}
