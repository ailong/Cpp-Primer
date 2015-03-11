/* 
* @Author: anchen
* @Date:   2015-02-26 11:17:57
* @Last Modified by:   anchen
* @Last Modified time: 2015-02-26 11:18:00
*/

#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude = { "example.", "example.", "Example"};
    string word;
    while (cin >> word)
        if (exclude.find(word) == exclude.end())
            ++word_count[word];
    for (const auto &w : word_count)
                cout << w.first << " occurs " << w.second
                << ((w.second > 1) ? " times " : " time ") << endl;
}