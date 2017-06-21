#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>  // for pairing
#include <stdlib.h> // for abs (absolute value)
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int n;

	cin >> N;   // grab the number of animals that need to be seated

	vector<int> hungerVector(N);
	// Populate the vector with the hunger values of N animals
	for (int i = 0; i < N; i++)
	{
		cin >> n; // grab the hunger values
		hungerVector[i] = n; // place the hunger value into the vector
	}

	sort(hungerVector.begin(), hungerVector.end());

	int dv = 0, maxDV = 0;
	for (unsigned int i = 0; i < hungerVector.size(); i++)
	{
		// make pairs and get their danger value difference
		if (i == 0)
		{
			dv = hungerVector[i + 1] - hungerVector[i]; // first pair
			if (dv > maxDV)
			{
				maxDV = dv;
			}
			dv = hungerVector[i + 2] - hungerVector[i]; // second pair
			if (dv > maxDV)
			{
				maxDV = dv;
			}
		}
		else if (i == hungerVector.size() - 2)
		{
			dv = hungerVector[i + 1] - hungerVector[i]; // last pair
			break;
		}
		else
		{
			dv = hungerVector[i + 2] - hungerVector[i]; // all other pairs
		}
		if (dv > maxDV)
		{
			maxDV = dv;
		}
	}

	cout << maxDV; // the highest danger value in the arrangement


	return 0;
}