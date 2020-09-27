// 静态表的实现————静态分配

#define MAXSIZE 10            // 定义最大长度
typedef struct{
    int data[MAXSIZE];        // 用静态的“数组”存放数据元素，元素个数确定之后不可改变,元素地址不可改变
    int length;               // 顺序表的当前长度
}Sqlist;                      // 顺序表的类型定义（静态分配方式）


// 基本操作————初始化一个顺序表
void InitList(Sqlist &L){
    for(int i = 0; i < MAXSIZE; i++>)
        L.data[i] = 0;         // 将所有数据接哦古设置为默认初始值
    L.length = 0;              // 顺序表初始长度为0。
}

int main()
{
    Sqlist L;                   // 声明一个顺序表
    InitList(&L);                // 初始化一个顺序表

    /*其他操作
    */
   return 0;
}