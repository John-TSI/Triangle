// https://leetcode.com/problems/triangle/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::vector<std::vector<int>> triangle{{2},{3,4},{6,5,7},{4,1,8,3}}; // 11
	//std::vector<std::vector<int>> triangle{{-10}};  // -10
	//std::vector<std::vector<int>> triangle{{2},{3,4}};  // 5
	
	Solution sol;
	std::cout << sol.minimumTotal(triangle);
	return 0;
}

