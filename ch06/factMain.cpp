/* 
* @Author: anchen
* @Date:   2015-01-22 09:57:58
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-22 10:08:50
*/

#include <iostream>
#include "Chapter6.h"
using namespace std;

int main(){
    int val = 10;
    Chapter6* chapter6 = new Chapter6();
    int j = chapter6->fact(val);
    cout<<val<<"! 是："<<j<<endl;
    return 0;
}