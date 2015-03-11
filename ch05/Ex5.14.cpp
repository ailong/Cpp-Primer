/* 
* @Author: anchen
* @Date:   2015-01-11 13:29:29
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 13:29:29
*/

#include <iostream>

using namespace std;

int main(){
   cout << "请输入多个字符串\n";
   string lastWord;
   auto some = 0, cnt = 1,n=0;
   string someWord, currWord;
   
   if(cin >> lastWord)
   {
       while(cin >> currWord){
           if(lastWord == currWord){
               ++cnt;
           }else{
               if(cnt > some){
                   someWord = lastWord;
                   lastWord = currWord;
                   some = cnt;
                   cnt = 1;
               }
           }
       }
   }
   if(some == 0){
       cout << "没有输入字符串!" << endl;
   }
   
   cout << someWord << " 出现 " << some << " 次" << endl;
    return 0;
}