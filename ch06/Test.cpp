/* 
* @Author: anchen
* @Date:   2015-01-27 16:30:46
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-27 16:32:42
*/

#include <iostream>

using namespace std;

char &get_val(string &str, string::size_type ix)
{
    return str[ix]; // get_val assumes the given index is valid
}

int main()
{
    string s("a value");
    cout << s << endl;  // prints a value
    get_val(s, 0) = 'A'; // changes s[0] to A
    cout << s << endl;  // prints A value
    return 0;
}