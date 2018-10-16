//sequential stack test
#include<bits/stdc++.h>
using namespace std;
#define MaxSize 100

typedef struct
{
    int data[MaxSize];//�������Ԫ��
    int top;//���ջ��ָ��
}SqStack;

void InitStack(SqStack * &s)
{
    s = (SqStack *)malloc(sizeof(SqStack));//����һ��˳��ջ�ڴ�
    s->top = -1;//ջ��ָ��Ϊ-1
}

void DestroyStack(SqStack * &s)
{
    free(s);//�ͷ�ջ�Ĵ���ռ�-����ջ
}

bool StackEmpty(SqStack * s)//�ж�ջ�Ƿ�Ϊ��
{
    return(s->top == -1);
}

bool Push(SqStack * &s,int e)
{
    if (s -> top == MaxSize - 1)//ջ�������ؽ�ջʧ��
        return false;
    s->top++;//ջ��ָ���һ
    s->data[s->top] = e;//��ֵ
    return true;
}

bool Pop(SqStack * &s,int & e)
{
    if (s->top == -1)//ջΪ�� ����ջʧ��
        return false;
    e = s->data[s -> top];
    s->top--;
    return true;
}

bool GetTop(SqStack * s,int & e)
{
    if (s->top == -1)//ջΪ�� ȡֵʧ��
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
