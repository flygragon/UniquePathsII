// UniquePathsII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"UniquePathsII.h"
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int>> Grid(m);
	for (int i = 0; i < m; i++) {
		Grid[i].resize(n);
		for (int j = 0; j < n; j++)
			cin >> Grid[i][j];
	}
	UniquePathsSum UPS;
	cout << UPS.uniquePathsWithObstacles(Grid) << '\n';
	system("pause");
    return 0;
}

