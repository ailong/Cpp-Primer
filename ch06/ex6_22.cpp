#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap_ptr(int* &_p1, int* &_p2);
int main()
{
    int a, b;
    int *p1=&a, *p2=&b;

    cout<<"请输入:\n";
    while(cin>>a>>b)
    {
        p1=&a, p2=&b;   //make sure p1-->a and p2-->b, otherwise funny things will 
                        

        swap_ptr(p1, p2);
        cout<<*p1
                <<" "
                    <<*p2
                        <<"\n";
    }

    return 0;
}

void swap_ptr(int* &_p1, int* &_p2)
{
    int *temp = _p1;
    _p1 = _p2;
    _p2 = temp;
}
