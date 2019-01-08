﻿//Given a non - negative integer num, repeatedly add all its digits until the result has only one digit.

#include "iostream"
#include <cstdint>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include "windows.h"
#include "algorithm"
#include <stack>
#include <string>
#include <queue>

using namespace std;

class Solution {
public:
	int addDigits(int num) {
		int result = num;
		while (result > 9)
		{
			num = result;
			result = 0;
			while (num)
			{
				result += (num % 10);
				num /= 10;
			}
		}
		return result;
	}
};

int main()
{
	Solution* solution = new Solution;
	
	auto result = solution->addDigits(38);
	cout << result << endl;
	delete(solution);
	system("pause");
	return 0;
}