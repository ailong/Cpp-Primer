#include <string>
#include <fstream>
#include <iostream>

using std::string; using std::cout; using std::endl; using std::ifstream;

int main()
{
    ifstream ifs("F:/data/letter.txt");
    if (!ifs) return -1;
    string longest_word;
    for (string word; ifs >> word; )
        if (word.find_first_not_of("aceimnorsuvwxz") == string::npos &&
            word.size() > longest_word.size())
            longest_word = word;
            
    cout << longest_word << endl;

    ifs.close();


    return 0;
}
