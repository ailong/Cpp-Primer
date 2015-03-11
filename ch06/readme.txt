Ex6.1：
实参是形参的初始值



Ex6.2：
(a)函数返回值不一致; 可将int f()改为：string f();
(b)函数要有返回值; 可改为： void f2(int i)
(c)函数体格式错误，缺少一个圆括号;可改为：int calc(int v1,int v2){/*……*/}
(d)函数体应写在圆括号内；可改为：double square(double x){return x*x;}



Ex6.6：
形参是代表调用函数时需要给定参数的形式，实参是形参的初始值、局部变量函数体内部的变量，在函数体外无法使用；局部静态变量是一直存在的局部变量



Ex6.13：
void f(T)是传值参数（拷贝参数）
void f(T&)是传引用参数



Ex6.14：
当希望函数改变实参的值时需要使用引用传参
当希望函数不改变实参的值时不能使用引用参数



Ex6.15：



Ex6.16：
boolis_empty(string& s) 
{ 
    if(s.empty())
        return true; 
    else
        return false;
}



Ex6.17：
我的程序是相同类型的
因为我用的拷贝传参，返回结果；传进去的参数不改变原有值



Ex6.18：
bool compare( matrix &val, matrix &val) 比较两个矩阵
vector< int > change_val(int n, int iter) 将vector< int >中第n个iter修改为iter



Ex6.19：
(a)：只能给一个double型参数
(b)：第一个参数只能给一个const string的地址
(c)：合法
(d)：第三个参数要给int型



Ex6.20：



Ex6.24：
void print(const int ia[10])
{
    for{size_t i=0;i!=10;i++}
        cout<<ia[i]<<endl;
}
传入的int参数必须初始化；



Ex6.28：




Ex6.29：



Ex6.30：



Ex6.31：



Ex6.32：




