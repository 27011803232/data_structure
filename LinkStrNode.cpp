#include<bits/stdc++.h>
using namespace std;

typedef struct snode{
    char data;
    struct snode * next;
}LinkStrNode;

void StrAssign(LinkStrNode * &s,char cstr[])
{
    int i;
    LinkStrNode * p,* r;
    s = (LinkStrNode *)malloc(sizeof(LinkStrNode));
    r = s;
    for (i = 0;cstr[i] != '\0';i++)
    {
        p = (LinkStrNode *)malloc(sizeof(LinkStrNode));
        p->data = cstr[i];
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

void DispStr(LinkStrNode * s)
{
    LinkStrNode * p = s->next;
    while(p != NULL)
    {
        cout<<p->data;
        p = p->next;
    }
}

int main()
{
    char ss[5] = "avcs";
    LinkStrNode *s;
    StrAssign(s,ss);
    DispStr(s);

    return 0;
}
