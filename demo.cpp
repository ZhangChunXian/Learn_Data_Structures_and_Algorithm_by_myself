#include <string>
using namespace std;

template<class nameType, class ageType>

class Person {
public:
    Person(NameType name, AgeType age) {
        this->mName = name;
        this->mAge = age;
    }

    void showPerson() {
        cout << "name = " << this->mName << " age: "
             << this->mAge << endl;
    }
public:
    NameType nName;
    AgeType mAge;
};

void test01() {
    // 指定NameType 为string类型, AgeType为int类型
    Person<string, int>p1("孙悟空", 999);
    p1.showPerson();
}