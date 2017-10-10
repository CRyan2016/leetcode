//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_496_NEXT_GREATER_ELEMENT_I_H
#define LEETCODE_496_NEXT_GREATER_ELEMENT_I_H

#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums) {
		stack<int> stk;
		unordered_map<int, int> uMap;
		for (int n :nums) {
			while (stk.size() && stk.top() < n) {
				uMap[stk.top()] = n;
				stk.pop();
			}
			stk.push(n);
		}
		vector<int> vec;
		for (int n:findNums) vec.push_back(uMap.count(n) ? uMap[n] : -1);
		return vec;
	}
};

#endif //LEETCODE_496_NEXT_GREATER_ELEMENT_I_H
