#include "solution.hpp"

/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.



Example 1:

Input: nums = [1,1,1,2,2,3], k = 2

Output: [1,2]

*/

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k)
	{
		// Инициализируем мапу, которая будет держать частоту появления того или иного числа
		unordered_map<int, int> freq{};

		// Инициализируем вектор, который будет результатом
		vector<int> res{};

		// Инициализируем очередь с приоритетом, в которую попадет частота появления того или иного числа
		priority_queue<pair<int, int>> pq{};

		// Цикл for для того чтобы выяснить частоту появления числа, так как ключ в мапе не может  быть одинаковым 
		// нам попадет в ключ допустим 1, мы одновременно с этим мы присвоим ему значение +1, после этого если он встретися
		// ещё он просто увеличит значение по данному ключу на 1
		for (int n : nums)
		{
			++freq[n];
		}

		// Добавляем ключ - значение в нашу очередь с приоритетом, она позволит нам получить наибольшее число - значение уже находящееся в нашей мапе 
		for (const auto& f : freq)
		{
			pq.push({ f.second, f.first });
		}

		//Цикл while, для добавления поочередно самых больших значений, удаляем из очереди число из вершины, k уменьшаем на 1, так мы добавляем самые частые значения, ну а их количество - k
		while (k > 0)
		{
			res.push_back(pq.top().second);
			pq.pop();

			k--;
		}

		// Возвращаем результат
		return res;

	}
};

/*

-------- TEST --------

*/

int main()
{
	Solution solution;

	vector<int> nums{3,3,3,4,4,1,1,2};

	int k{ 2 };

	for (const auto& tKF : solution.topKFrequent(nums, k))
	{
		cout << tKF << '\n';
	}
}
