#include <iostream>

using namespace std;

int main()
{
	int T = 0, N = 0;
	long x = 0;

	//	Grab the number of test cases there are in the input
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		//	Grab the size of the insect colony
		cin >> N;

		//	Grab the size of each of the insect in the colony, and add it to get the total size of all of the insects
		for (int n = 0; n < N; n++)
		{
			int temp;
			cin >> temp;
			x += temp;
		}

		//	If the total size of the insects is even, then it's possible for the colony to disappear
		//	XOR of two even numbers is 0, whereas it's something else for other numbers
		if (x % 2 == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}

		//	Reset x to 0 for the next iteration of the for loop
		x = 0;
	}

	return 0;
}