#include <iostream>
//function template
template<typename T,typename T2,typename T3>
T MAX(T2 a,T3 b)
{
    return a>b?a:b;
}

int main()
{
    std::cout<< MAX<int>(12,13)<<std::endl;
    std::cout<< MAX<char>('a','z')<<std::endl;
    std::cout<<MAX<double>(15.23,12.2)<<std::endl;
    std::cout<< MAX<char>('a',65)<<std::endl;
    std::cout<< MAX<float>('a',65)<<std::endl;
    return 0;
}