#include<iostream>
using namespace std;
/*
Имплементирайте следните функции:
-strlen (намиране на дължина на стринг)
-strcpy (копиране на стринг)
-strcat (конкатениране на стрингове)
-strcmp (лексикографско сравнение на стрингове)
*/
const int MAXSIZE = 1024;


unsigned int myStrlen(const char *arr)
{
    if(!arr) /// (!arr)
    {
        return 0;
    }
    unsigned int i = 0;
    while(*arr)
    {
        i++;
        arr++;
    }
    return i;
}

void myStrCpy(char *dest, char *src)
{
    if(!src)
    {
        return;
    }
    while(*src) /// src[i] != '\0'
    {
        *dest = *src;
        dest++;
        src++;
    }
}

int myStrCmp(char* str1, char* str2)
{
    if(!str1 || !str2) return 10;
    while(*str1 && *str2)
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

char* myStrCat(char* dest, char* src)
{
    unsigned int length1 = myStrlen(src);
    length1 += myStrlen(dest);
    myStrCpy(dest, src);
    return dest;
}


int main()
{



    return 0;
}
