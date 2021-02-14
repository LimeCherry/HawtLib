#pragma once

/*
	2d to 1d array

	N(x) x M(y)

	N = 2

	M = 4

		0 1
		2 3
		4 5
		6 7

		for (int y = 0; y < M; ++y) {
			for (int x = 0; x < N; ++x ) {
				idx = x + 2y
				[1st] {0 + 0, 1 + 0} = 0, 1	{0}
				[2nd] {0 + 2, 1 + 2} = 2, 3	{1}
				[3rd] {0 + 4, 1 + 4} = 4, 5	{2}
				[4th] {0 + 6, 1 + 6} = 6, 7	{3}

			}
		}


		vector of vectors
		{
		v1 - > v1[0]
		v2
		v3
		v4
		v5
		}
		std::vector<
		std::vector<
		IniParser::Token*>*>& allTokens


		for (vector : vectors) {

			for (Token : vector)
		}

	*/


template <typename T> T* Array2DTo1D(T** array2D, size_t sizeY, size_t sizeX) {
	T* returnArr = new T[sizeX * sizeY];
	for (size_t y = 0; y < sizeY; ++y) {
		for (size_t x = 0; x < sizeX; ++x) {
			returnArr[(2 * y) + x] = array2D[y][x];
		}
	}
	return returnArr;
}