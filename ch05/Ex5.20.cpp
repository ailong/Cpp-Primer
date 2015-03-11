/* 
* @Author: anchen
* @Date:   2015-01-11 13:30:31
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 13:30:31
*/

#include <iostream>

using namespace std;

int main(){
   cout << "请输入字符串" << endl;
   string word;
   string currWord;
   cin >> word;
   int wordRepeated = false;
   while (cin >> currWord)
   {
       if(word == currWord){
           cout << "字符串 " << currWord << " 连续出现两次 " << endl;
           wordRepeated = true;
           break;
       }else{
           word = currWord;
       }
   }
   if(!wordRepeated)
         cout << "没有连续重复字符串\n";
    return 0;
}