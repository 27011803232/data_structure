//sequential stack test
#include<bits/stdc++.h>
using namespace std;
#define MaxSize 100

typedef struct
{
    int data[MaxSize];//´æ·ÅÊý¾ÝÔªËØ
    int top;//´æ·ÅÕ»¶¥Ö¸Õë
}SqStack;

void InitStack(SqStack * &s)
{
    s = (SqStack *)malloc(sizeof(SqStack));//·ÖÅäÒ»¸öË³ÐòÕ»ÄÚ´æ
    s->top = -1;//Õ»¶¥Ö¸ÕëÎª-1
}

void DestroyStack(SqStack * &s)
{
    free(s);//ÊÍ·ÅÕ»µÄ´¢´æ¿Õ¼ä-Ïú»ÙÕ»
}

bool StackEmpty(SqStack * s)//ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
{
    return(s->top == -1);
}

bool Push(SqStack * &s,int e)
{
    if (s -> top == MaxSize - 1)//Õ»Âú£¬·µ»Ø½øÕ»Ê§°Ü
        return false;
    s->top++;//Õ»¶¥Ö¸Õë¼ÓÒ»
    s->data[s->top] = e;//¸³Öµ
    return true;
}

bool Pop(SqStack * &s,int & e)
{
    if (s->top == -1)//Õ»Îª¿Õ £¬³öÕ»Ê§°Ü
        return false;
    e = s->data[s -> top];
    s->top--;
    return true;
}

bool GetTop(SqStack * s,int & e)
{
    if (s->top == -1)//Õ»Îª¿Õ È¡ÖµÊ§°Ü
        return false;
    e = s->data[s->top];
    return true;
}

int main()
{
    SqStack * s;
    InitStack(s);
    cout<<StackEmpty(s)<<endl;
    Push(s,2);
    cout<<StackEmpty(s)<<endl;
    int e;
    GetTop(s,e);
    cout<<e<<endl;

    return 0;
}
