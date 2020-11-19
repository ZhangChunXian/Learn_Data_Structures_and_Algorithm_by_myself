#include <iostream>

using namespace std;

// 对比结构体需要一次对比各个分量来判断凉饿结构体是否相等

typedef struct{
    int num;
    int people;
}Customer;

void test(){
    Customer a;
    a.num = 1;
    a.people = 1;

    Customer b;
    b.num = 1;
    b.people = 1;

    /* 错误写法
    if(a == b)
    */

    // 正确写法
    if(a.num == b.num && a.people == b.people){
        printf("相等");
    }else printf("不相等");
}