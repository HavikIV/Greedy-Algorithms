#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
	long long int N, sum, x, y, a, b, mod;
	N = sum = x = y = a = b = 0;
	mod = 1000000007;   // 1e9 + 7, for moduloing the total distance as it would be too big other wise

						// Get the number of cities
	cin >> N;

	// Arrays to hold the coordinates of the cities, need to make sure
	// the elements can hold the full value of the coorindates, as int wasn't
	// big enough for the test data
	long long int arrayX[N];
	long long int arrayY[N];

	// Grab the coorindates, and populate the arrays
	for (int i = 0; i < N; i++)
	{
		cin >> arrayX[i] >> arrayY[i];
	}

	// sort each of the arrays in increasing order.
	sort(arrayX, arrayX + N);
	sort(arrayY, arrayY + N);

	// Calculate the total distance between all pairs of cities
	for (int i = 1; i < N; i++)
	{
		// Previous distance + distance between the current pair
		x = a + i * abs(arrayX[i] - arrayX[i - 1]);
		// store the distance for the next iteration
		a = x;

		// Previous distance + distance between the current pair
		y = b + i * abs(arrayY[i] - arrayY[i - 1]);
		// store the distance for the next iteration
		b = y;

		sum += ((x % mod) + (y % mod));
	}

	// output the total distance
	cout << (sum % mod) << endl;
	return 0;
}