//! @Alan
//!
//! Exercise 6.33:
//! Write a recursive function to print the contents of a vector.
//!
//  question about this exercise on stackoverflow:
//  http://stackoverflow.com/questions/20184299/how-to-understand-and-fix-the-segmentation-fault-in-this-code

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void vector_print(const vector<T> &_v);
void printVector( Iterator first, Iterator last);

int main()
{
    string s;
    vector<string> v;

    cout<<"Please Enter:\n";
    while(cin>>s)
    {
        v.push_back(s);
        printVector(v.begin(),v.end());
    }
}

void printVector( Iterator first, Iterator last)
{
    if( first != last )
    {
        std::cout << *first << " " ;
        printVector( std::next( first ), last ) ;
    }
}

void vector_print(const vector<T> &_v)
{
    static
           typename vector<T>::const_iterator it = _v.begin();
    cout << *it
            <<" ";

    ++it;

    if(it != _v.end())
    {        
        vector_print(_v);
    }
}



