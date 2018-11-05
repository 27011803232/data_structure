//sequential stack test
#include<bits/stdc++.h>
using namespace std;
#define MaxSize 100

typedef struct
{
    int data[MaxSize];//�������Ԫ��
    int top;//���ջ��ָ��
}SqStack_Int;

typedef struct
{
    char data[MaxSize];
    int top;
}SqStack_Char;

void InitStack(SqStack_Int * &s)
{
    s = (SqStack_Int *)malloc(sizeof(SqStack_Int));//����һ��˳��ջ�ڴ�
    s->top = -1;//ջ��ָ��Ϊ-1
}

void InitStack_Char(SqStack_Char * &s)//�ַ�ջ��ʼ��
{
    s = (SqStack_Char *)malloc(sizeof(SqStack_Char));//�����ڴ�
    s->top = -1;
}

void DestroyStack(SqStack_Int * &s)//ͨ��ɾ��
{
    free(s);//�ͷ�ջ�Ĵ���ռ�-����ջ
}

bool StackEmpty(SqStack_Int * s)//�ж�ջ�Ƿ�Ϊ��
{
    return(s->top == -1);
}

bool Push(SqStack_Int * &s,int e)
{
    if (s -> top == MaxSize - 1)//ջ�������ؽ�ջʧ��
        return false;
    s->top++;//ջ��ָ���һ
    s->data[s->top] = e;//��ֵ
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
    if (s->top == -1)//ջΪ�� ����ջʧ��
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
    if (s->top == -1)//ջΪ�� ȡֵʧ��
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

void trans(char * exp,char postexp[])//���������ʽת��Ϊ��׺���ʽ
{

}

int main()
{


    return 0;
}
