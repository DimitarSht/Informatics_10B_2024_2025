#include<iostream>
#include<string>
using namespace std;
/*
Задача 01:
Да се реализира рекурсивна функция,
която приема стринг и връща броя на малките
и големите символи в него.
Пример: "HeLLo -> 2 lowercase; 3 - uppercase
*/

bool isUpp(char c) {return c >= 'A' && c <= 'Z';}
bool isLow(char c) {return c >= 'a' && c <= 'z';}
void cnt(string str, int position, int Lower, int Upper)
{
    if(position == str.size())
    {
        cout<<Lower<<" lowercase; "<<Upper<<" uppercase"<<endl;
        return;
    }
    if(islower(str[position])) Lower++;
    if(isupper(str[position])) Upper++;

    cnt(str, position + 1, Lower, Upper);
}

int main()
{
    string str;
    cin>>str;
    cnt(str, 0, 0, 0);

    return 0;
}
