#include<iostream>
#include<cstring>
using namespace std;
/*
1.	Напишете програма, която взима намира
най-дългата дума в даден чар масив.
Пример:
Вход:
C++ is a general-purpose programming language. 7 думи
Изход:
programming
*/
int main()
{
    int maxLenght = 0, currLenght = 0;
    char sentence[100];
    cin.getline(sentence, 100); /// нова версия! -
                                /// Ползвайте го! - въвеждаме елементи на масива,
                                /// докато не въведем нов ред.
    /// cin>>sentence; /// въвеждаме елементи на масива, докато не въведем интервал.
    /*
    for(int i = 0; sentence[i] != '.'; i++)
    {
        cin>>sentence[i];   - остарял начин - не го ползвайте!
    }
    */
    int lenght = strlen(sentence);
    int lenghtBeforeMaxWord = 0;
    for(int i = 0; sentence[i] != '.';/* i < lenght*/ i++)
    {
        if(sentence[i] != ' ' && sentence[i] != '-')
        {
            currLenght++;
            if(currLenght > maxLenght)
            {
                maxLenght = currLenght;
                lenghtBeforeMaxWord = i - maxLenght + 1;
            }
        }
        else
        {

            currLenght = 0;
        }
    }
    for(int i = lenghtBeforeMaxWord; i < lenghtBeforeMaxWord + maxLenght; i++)
    {
        cout<<sentence[i];
    }



    return 0;
}
