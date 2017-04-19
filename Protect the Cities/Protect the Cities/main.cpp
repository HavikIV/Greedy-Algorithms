#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T, N;
	long long int x1, x2, y1, y2, xin, yin;
	cin >> T;

	for (int a = 0; a < T; a++)
	{
		cin >> N;

		x1 = y1 = 0;
		x2 = y2 = 1;

		for (int i = 0; i < N; i++)
		{
			cin >> xin;
			cin >> yin;

			if (xin < x1)
			{
				x1 = xin;
			}
			else if (xin > x2)
			{
				x2 = xin;
			}

			if (yin < y1)
			{
				y1 = yin;
			}
			else if (yin > y2)
			{
				y2 = yin;
			}
		}

		long long int side = max(x2 - x1, y2 - y1);
		cout << side * side << endl;
	}

	return 0;
}