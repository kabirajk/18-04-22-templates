#include <iostream>
#include<typeinfo>
//templates with static varibale
//due to templates creates the required function during 
//runtime because those different function 
//creates different scopes so the static will be different for those different functions
template<typename T>  
void show_type(T val)
{
    static int no_of_times_created=0;
    std::cout<<typeid(val).name()<<no_of_times_created<<std::endl;
    no_of_times_created++;
}
int main()
{   
    show_type(12);
    show_type(14);
    show_type(12);
    show_type(112);
    show_type(52);
    show_type(3672);
    show_type(12.0f);
    show_type(13.0f);
    show_type(4.0f);
    show_type(328732.0f);
    show_type('a');
    show_type('b');
    show_type('c');
    show_type('d');
    show_type('e');
    show_type(900);
    show_type(12);

    return 0;
}