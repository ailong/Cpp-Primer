#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

//int main()
//{
//	map<string, size_t> word_count;
//	set<string> exclude = { "example.", "example.", "Example" };
//	string word;
//	while (cin >> word)
//		if (exclude.find(word) == exclude.end())
//			++word_count[word];
//	for (const auto &w : word_count)
//		cout << w.first << " occurs " << w.second
//		<< ((w.second > 1) ? " times " : " time ") << endl;
//}

vector<int> twoSum(vector<int> &numbers, int target);
void printResult(vector<int>* result);

int main()
{
	vector<int> numbers = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 5, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108 };
	int target = 9;
	vector<int> result = twoSum(numbers, target);
	printResult(&result);
}

vector<int> twoSum(vector<int> &numbers, int target) {
	vector<int> result;
	int index1 = 0;
	int index2 = 0;
	for (auto iterFirst = numbers.cbegin(); iterFirst != numbers.cend(); ++iterFirst)
	{
		for (auto iterSecond = numbers.cbegin(); iterSecond != numbers.cend(); ++iterSecond)
		{
			int plusTwo =  *iterFirst + *iterSecond;
			if (plusTwo == target && iterFirst != iterSecond && index2 != (index2%numbers.size()))
			{
				result.push_back(index2%numbers.size());
				result.push_back(index1);
			}
			index2++;
		}
		index1++;
	}
	return result;
}

void printResult(vector<int>* result)
{
	if (result)
	{
		for (auto iter = result->cbegin(); iter != result->cend();++iter)
		{
			cout << "相加等于目标值：9的值对有：" << *iter << "和" << *(iter++) << endl;
		}
	}
}