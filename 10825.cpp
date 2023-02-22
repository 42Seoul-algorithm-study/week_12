// 국영수

#include <algorithm>
#include <vector>
#include <iostream>// 입출력 가능하게 하는 헤더
using namespace	std;

typedef struct s_data
{
	string	name;
	int		kor;
	int		eng;
	int		math;
}	t_data;

bool	compare(t_data a, t_data b)
{
	if (a.kor != b.kor)
		return (a.kor > b.kor);
	else if (a.eng != b.eng)
		return (a.eng < b.eng);
	else if (a.math != b.math)
		return (a.math > b.math);
	else
		return (a.name < b.name);
}


int	main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int	n;
	vector<t_data>	arr;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		t_data	tmp;
		cin >> tmp.name >> tmp.kor >> tmp.eng >> tmp.math;
		arr.push_back(tmp);
	}
	stable_sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < n; i++)
		cout << arr[i].name << '\n';
}
