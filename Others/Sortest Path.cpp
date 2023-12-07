#include<bits/stdc++.h>
#define GET_FASTER ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
	GET_FASTER;
	int t;
	cin >> t;
	int numberOfCities, numberOfRoads, sourceCity, destinationCity, roadCost, hometown, maxCostFound;
	for (int x = 1; x <= t; x++)
	{
		cin >> numberOfCities >> numberOfRoads;

		vector<int> areaMap[numberOfCities];
		int distanceFromHomeTown[numberOfCities];
		int cost[numberOfCities][numberOfCities];

		memset(cost, 0, sizeof(cost));
		for (int i = 0; i <= numberOfCities; i++) {
			distanceFromHomeTown[i] = INT_MAX;
		}

		for (int i = 0; i < numberOfRoads; ++i)
		{
			cin >> sourceCity >> destinationCity >> roadCost;
			if (cost[sourceCity][destinationCity])
			{
				cost[sourceCity][destinationCity] = cost[destinationCity][sourceCity] = min(cost[sourceCity][destinationCity], roadCost);
			}
			else {
				areaMap[sourceCity].push_back(destinationCity);
				areaMap[destinationCity].push_back(sourceCity);
				cost[sourceCity][destinationCity] = cost[destinationCity][sourceCity] = roadCost;
			}
		}

		cin >> hometown;

		queue<int> cityQueue;

		cityQueue.push(hometown);

		distanceFromHomeTown[hometown] = 0;

		while (!cityQueue.empty()) {
			int startingCity = cityQueue.front();

			cityQueue.pop();

			for (int i = 0; i < areaMap[startingCity].size(); ++i)
			{
				int currentCity = areaMap[startingCity][i];
				maxCostFound = max(distanceFromHomeTown[startingCity], cost[startingCity][currentCity]);

				if (distanceFromHomeTown[currentCity] > maxCostFound) {
					distanceFromHomeTown[currentCity] = maxCostFound;
					cityQueue.push(currentCity);
				}
			}
		}

		cout << "Case " << x << ":\n";
		for (int i = 0; i < numberOfCities; ++i)
		{
			if (distanceFromHomeTown[i] == INT_MAX)
				cout << "Impossible" << endl;
			else
				cout << distanceFromHomeTown[i] << endl;
		}

	}
	return 0;
}

