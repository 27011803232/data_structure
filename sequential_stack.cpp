//sequential stack test
#include<bits/stdc++.h>
using namespace std;
#define MaxSize 100

typedef struct
{
    int data[MaxSize];//存放数据元素
    int top;//存放栈顶指针
}SqStack_Int;

typedef struct
{
    char data[MaxSize];
    int top;
}SqStack_Char;

void InitStack(SqStack_Int * &s)
{
    s = (SqStack_Int *)malloc(sizeof(SqStack_Int));//分配一个顺序栈内存
    s->top = -1;//栈顶指针为-1
}

void InitStack_Char(SqStack_Char * &s)//字符栈初始化
{
    s = (SqStack_Char *)malloc(sizeof(SqStack_Char));//分配内存
    s->top = -1;
}

void DestroyStack(SqStack_Int * &s)//通用删除
{
    free(s);//释放栈的储存空间-销毁栈
}

bool StackEmpty(SqStack_Int * s)//判断栈是否为空
{
    return(s->top == -1);
}

bool Push(SqStack_Int * &s,int e)
{
    if (s -> top == MaxSize - 1)//栈满，返回进栈失败
        return false;
    s->top++;//栈顶指针加一
    s->data[s->top] = e;//赋值
    return true;
}

bool Push_Char(SqStack_Char * &s,char c)
{
    if (s->top == MaxSize - 1)
        return false;
    s->top++;
    s->data[s->top] = c;
    return true;
}

bool Pop(SqStack_Int * &s,int & e)
{
    if (s->top == -1)//栈为空 ，出栈失败
        return false;
    e = s->data[s -> top];
    s->top--;
    return true;
}

bool Pop_Char(SqStack_Char * &s,int & c)
{
    if (s->top == -1)
        return false;
    c = s->data[s->top];
    s->top--;
    return true;
}

bool GetTop(SqStack_Int * s,int & e)
{
    if (s->top == -1)//栈为空 取值失败
        return false;
    e = s->data[s->top];
    return true;
}

bool GetTop_Char(SqStack_Char * s, int & c)
{
    if (s->top == -1)
        return false;
    c = s->data[s->top];
    return true;
}

void trans(char * exp,char postexp[])//将算数表达式转化为后缀表达式
{

}

int main()
{


    return 0;
}
