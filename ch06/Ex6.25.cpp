/* 
* @Author: anchen
* @Date:   2015-01-27 14:37:33
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-27 15:35:06
*/

#include <iostream>

using namespace std;

int main(int argc,char **argv){
    string result="";
    for(size_t i=0;i!=argc;i++)
        result += argv[i];
    cout<<result<<endl;
    return 0;
}