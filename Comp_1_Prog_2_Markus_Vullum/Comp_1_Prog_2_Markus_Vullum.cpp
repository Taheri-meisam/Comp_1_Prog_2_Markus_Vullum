#include <iostream>
#include <string>

class Animal {
public:
    std::string name;
    std::string place_of_birth;
    double age; //in case want to use 3,4 years old
    void speak() {
        std::string sound;

    }
private:
    int Animal_ID;
};

class Dog:Animal {
public:
    //speak class that override Speak()
private:

};

class Cat:Animal {
public:
    //speak class that override Speak()
private:

};

class Bird:Animal {
public:
    //speak class that override Speak()
private:

};



#include <string>
#include <iostream>
#include <tuple>

template<class V1, class V2>
class MyTemp {
public:
    V1 x;
    V2 y;
    MyTemp(V1 _x, V2 _y) : x{ _x }, y{ _y }
    {

    }
    V1 getValueV1();
    std::tuple<V1, V2> GetVal();
};

template<class V1, class V2>
V1 MyTemp<V1, V2>::getValueV1()
{
    return x;
}

template<class V1, class V2>
std::tuple<V1, V2> MyTemp<V1, V2>::GetVal()
{
    return { x, y };
}

int main()
{
    MyTemp<std::string, int> obj1{ "Markus", 19 };
    std::string result;
    result = obj1.getValueV1();
    std::cout << result << std::endl;

    auto val = obj1.GetVal();
    std::cout << "x=" << std::get<0>(val) << " y=" << std::get<1>(val) << std::endl;
}