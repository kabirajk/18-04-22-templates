#include <iostream>
//class template
template<typename T,typename T2>
class data
{   public:
    T value1;
    T2 value2;
    data(T v1,T2 v2)    
    {
        value1=v1;
        value2=v2;
    }
    void printdata()
    {
        std::cout<<"value1 "<<value1<<" value2 "<<value2<<std::endl;
    }
};

int main()
{
    data<int,int> d1(12,21);
    d1.printdata();
    data<int,char> d2(12,'h');
    d2.printdata();

    return 0;
}