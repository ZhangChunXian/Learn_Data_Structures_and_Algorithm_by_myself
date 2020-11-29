//? 头文件
#include <stdio.h>


//? 宏定义
#define MAXSIZE 255                 // 预定义最大串长为255


//? 串结构声明
//串的定长顺序存储
typedef struct
{
    char ch[MAXSIZE];               // 每个分量存储字符
    int length;                     // 串的实际长度
}SString;

// 数组的堆分配存储, 动态数组分配
typedef struct
{
    char *ch;                       // 按串长分配存储区, ch指向串的基地址
    int length;                     // 串的长度
}HString;
/**
 * ! 本节的字符串结构为字符串数组中第一位空缺,
 * ! 最后一个length参数表示字符串的长度
 */

//! 串的链式存储
// 每个节点存储一个字符, 缺点: 存储密度低
typedef struct StringNode
{
    char ch;                        // 每个结点存一个字母
    struct StringNode *next;
}StringNode, * String;

// 每个节点存储多个字符
typedef struct StringNode
{
    char ch[4];
    struct StingNode *next;
}StringNode, *String;