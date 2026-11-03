#include "solution.hpp"

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs)
	{
		unordered_map<string, vector<string>> mp;

		for (string s : strs)
		{
			string t = s;

			sort(t.begin(), t.end());

			// "eat","tea","tan","ate","nat","bat"
			mp[t].push_back(s);

		}

		vector<vector<string>> result{};

		for (auto p : mp)
		{
			result.push_back(p.second);
		}

		return result;

	}
};

int main()
{
	Solution solution;

	vector<string> strs{ "eat","tea","tan","ate","nat","bat" };

	for (auto gr1 : solution.groupAnagrams(strs))
	{
		for (auto gr2 : gr1)
		{
			cout << gr2 << '\n';
		}
	}
	
}