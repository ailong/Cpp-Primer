/* 
* @Author: anchen
* @Date:   2015-01-23 11:34:06
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-23 11:48:45
*/

#include <iostream>
using namespace std;

string SwapCapitalLetters(string letters)
{
    string result = "";
    for (int i = 0; i < letters.size(); i++)
    {
        char letter = letters.at(i);
        if (letter > 96)
            letter = letter - 32;
        result += letter;
    }
    return result;
}

string SwapLowercaseLetters(string letters)
{
    string result = "";
    for (int i = 0; i < letters.size(); i++)
    {
        char letter = letters.at(i);
        if (letter < 97)
            letter = letter + 32;
        result += letter;
    }
    return result;
}

int main(){
    string test = "AsDfGhJkL";
    cout<<"改为大写后："<<SwapCapitalLetters(test)<<endl;
    cout<<"改为小写后："<<SwapLowercaseLetters(test)<<endl;
    return 0;
}