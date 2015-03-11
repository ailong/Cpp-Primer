#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (std::getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("F:/data/book.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}

