#include "solution.hpp"

using namespace std;

/*
	Given two strings s and t, return true if t is an anagram of s, and false otherwise.

	Example 1:

	Input: s = "anagram", t = "nagaram"

	Output: true
*/


class Solution {
public:
	// Решение 1 (5-6 ms - LeetCode)
	bool isAnagram_1(string s, string t) {
		// Сортируем две строки
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());


		//Сравниваем их
		if (s == t)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	// |В процессе| Решение 2 (0-2 mc - LeetCode)
	/*bool isAnagram_2(string s, string t)
	{
		
	}
	*/
};

/*

-------- TEST --------

*/

int main()
{
	Solution solution;

	cout << solution.isAnagram_1("anagram", "nagaram") << '\n';
}