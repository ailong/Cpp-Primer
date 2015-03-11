/* 
* @Author: anchen
* @Date:   2015-01-08 17:17:17
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 17:32:12
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<unsigned> scores(11,0);
    auto iter = scores.begin();
    unsigned grade;
    while(cin>>grade) {
        if(grade<=100)
            ++(*(iter + (grade/10)));
    }

    cout << "成绩如下: " << endl;
    for(auto it : scores){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}