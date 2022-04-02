#include<iostream>
#include<string>
#include<map>
#include<thread>
#include<vector>
#include<mutex>
#include<algorithm>
using namespace std;

class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int res = INT_MAX;
		int start = 0;
		int end = 0;
		double sum = 0;
		if (s == 0 || nums.size() == 0) return 0;
		while (end < nums.size()) {
			sum = sum + nums[end];
			while (sum >= s) {
				res = min(res, end - start + 1);
				sum = sum - nums[start];
				start++;
			}
			end++;
		}
		return res == INT_MAX ? 0 : res;
	}
};

int  main()
{
	int res;
	vector<int>ceshi{2,3,1,2,4,3};
	Solution cesi;
	res=cesi.minSubArrayLen(7,ceshi);
	cout << "---------------"<<res<<"---------------" << endl;
	for (auto ptr:ceshi) {
		cout << ptr << endl;
	}
	







	system("pause");
	return 0;

}