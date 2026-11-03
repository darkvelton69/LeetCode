#include "solution.hpp"

class Solution {
public:
	// Решение 1 (14-15 ms - LeetCode)
	vector<vector<string>> groupAnagrams(vector<string>& strs)
	{
		// Создаем мапу
		unordered_map<string, vector<string>> mp;

		// Проходим по данному нам вектору содержащий строки
		for (string s : strs)
		{
			// Инициализируем переменную строкой s
			// она будет хранить сортированную s
			string t = s;

			// Сортировка. Именно t потому что нам нужно иметь общий ключ но разные значения
			// для этого s мы менять не будем, а только отсортируем инициализируемую нами ранее переменную
			sort(t.begin(), t.end());

			// Присваиваем нашей мапе ключ-значение (t - s), каждую итерацию наш ключ (t) будет сортироваться
			// если имеются дубликаты ключа, то новый ключ не добавится, а останется прежним при этом значение будет присвоено
			mp[t].push_back(s);

		}

		// Создаем вектор содержащий вектор строк, для ответа на задание
		vector<vector<string>> result{};

		// Проходим по мапе и добавляем значения в наш вектор
		// почему именно значение, потому что ключ у нас это отсортированный t, тоесть
		// он предназначен для распределения на подгруппы анаграмм
		for (auto p : mp)
		{
			result.push_back(p.second);
		}

		// Возвращаем значение
		return result;

	}
};

/*

-------- TEST --------

*/

int main()
{
	Solution solution;

	vector<string> strs{ "eat","tea","tan","ate","nat","bat" };

	for (auto gA1 : solution.groupAnagrams(strs))
	{
		for (auto gA2 : gA1)
		{
			cout << gA2 << '\n';
		}
	}
	
}
