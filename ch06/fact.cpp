/* 
* @Author: anchen
* @Date:   2015-01-22 10:04:12
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-22 10:06:53
*/
#include "Chapter6.h"

int Chapter6::fact(int val)
{
    int ret=1;
    while(val>1)
    {
        ret *= val--;
    }
    return ret; 
}

Chapter6::Chapter6()
{

}

Chapter6::~Chapter6()
{

}