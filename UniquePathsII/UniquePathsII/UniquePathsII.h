#pragma once
#include<vector>

class UniquePathsSum {
public:
	int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
		if (obstacleGrid.empty() || obstacleGrid[0].empty())
			return 0;
		int row = obstacleGrid.size(), col = obstacleGrid[0].size(), i = 0, j = 0;
		while (i <row && !obstacleGrid[i][0]) obstacleGrid[i++][0] = 1;
		while (i <row) obstacleGrid[i++][0] = 0;
		j++;
		if (obstacleGrid[0][0])
			while (j <col && !obstacleGrid[0][j]) obstacleGrid[0][j++] = 1;
		while (j <col) obstacleGrid[0][j++] = 0;
		for (i = 1; i <row; i++)
			for (j = 1; j <col; j++)
				if (!obstacleGrid[i][j])
					obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
				else obstacleGrid[i][j] = 0;
				return obstacleGrid.back().back();
	}
};