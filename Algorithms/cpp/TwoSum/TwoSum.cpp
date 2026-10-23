#include "solution.hpp"

using namespace std;

/*

You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

*/



class Solution {
public:
	// Решение 1 (0-2 mc - LeetCode)
	vector<int> twoSum_1(vector<int> nums, int target)
	{
		// Создаём хеш-таблицу (мапу)
		unordered_map<int, int> numMap{};

		// Инициализируем переменную n, размером вектора
		size_t n = nums.size();

		// Проходим с помощью цикла for по вектору
		for (int i = 0; i < n;i++)
		{
			// Иницилизируем переменную, которая будет хранить разницу чисел (цель(target) - текущее(nums[i]))
			int complement = target - nums[i];

			// Если данное число находится в нашей мапе (ключ), 
			// возвращаем значение находящиеся под ключом complement и i
			if (numMap.count(complement))
			{
				return { numMap[complement], i };
				
			}
			// Если не находится то присваиваем ключу nums[i] число i
			numMap[nums[i]] = i;
		}

		return {};

		
	}
};

/*

-------- TEST --------

*/

int main()
{

	Solution solution;

	vector<int> nums{ 1,3,5 };

	for (const auto& s : solution.twoSum(nums, 4))
	{
		cout << s << '\n';
	}

}
