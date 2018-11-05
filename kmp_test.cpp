#include<bits/stdc++.h>
using namespace std;
#define MasSize 100

typedef struct{
    char data[MaxSize];
    int length;
}SqString;

void StrAssign(SqString & s,char cstr[])
{
    int i;
    for (i = 0;data[i] != '\0';i++)
        s.data[i] = cstr[i];
    s.length = i;
}



int main()
{
    char s[] = "";

    return 0;
}
