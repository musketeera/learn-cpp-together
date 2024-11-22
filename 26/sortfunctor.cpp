/////////////////////////////////////////////////////////////////
// 
// <<一起来学C++ 26.函数指针>>视频配套例程
// sortfunctor.cpp
// 自定义函数对象作为排序函数的参数
//
/////////////////////////////////////////////////////////////////

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct Compare{
    bool operator()(float a, float b) {
        return a<b;
    }
};

main(void){
    vector<float> numbers{0.1,3,0.0,-3.4,7,100,-100};
    sort(numbers.begin(),numbers.end(),Compare());

    for(auto number:numbers)
        cout<<number<<", ";
}