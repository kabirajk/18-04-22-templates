#include <iostream>
//class with templatefunction
class temp
{   public:
    template<typename T,typename T2>
    static T add(T a,T2 b)
    {
        return a+b;
    }
    template<typename T>
    static T add(T a,T b)
    {
        return a+b;
    }
};

int main()
{   
    temp t;
    std::cout<<temp::add(1,2)<<std::endl;
    std::cout<<temp::add(1,2.0)<<std::endl;
    std::cout<<t.add('A','b')<<std::endl;
    std::cout<<t.add(1.0f,1.0f)<<std::endl;
    std::cout<<t.add(1.0f,1.0)<<std::endl;
    std::cout<<t.add(1.0,1.0f)<<std::endl;
    std::cout<<t.add('a',1)<<std::endl;
    std::cout<<t.add(123,'b')<<std::endl;
    std::cout<<t.add(218739812637863872,178623782378638)<<std::endl;





    
    return 0;
}