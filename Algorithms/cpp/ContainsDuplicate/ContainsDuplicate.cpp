#include "solution.hpp"

using namespace std;

class Solution {
public:

	// Решение 1 (96-100 ms - LeetCode)
	bool containsDuplicate_1(vector<int>& nums)
	{

		unordered_set<int> set{};

		for (int num : nums)
		{
			set.insert(num);
		}

		if (nums.size() != set.size())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// Решение 2 (В процессе)
	//bool containsDuplicate_2(vector<int>& nums)
	//{
	//	
	//	
	//}
};

int main()
{
	Solution solution;

	vector<int> nums{ 2,14,18,22,22,22 };

	solution.containsDuplicate_1(nums);
}
