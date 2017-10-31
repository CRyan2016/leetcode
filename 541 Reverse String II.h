//
// Created by cz on 2017/10/17.
//

#ifndef LEETCODE_541_REVERSE_STRING_II_H
#define LEETCODE_541_REVERSE_STRING_II_H

#include <vector>
#include <string>
#include <>

using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		int size = s.size();
		if(k > size) return s;
		for (int i = 0; i <size ; ) {
			for(int m = i,n = i+k-1;m < n;++m,--n){
				char temp = s[m];
				s[m] = s[n];
				s[n] = temp;
			}
			i += 2*k;
		}
		return s;
	}
};

#endif //LEETCODE_541_REVERSE_STRING_II_H
