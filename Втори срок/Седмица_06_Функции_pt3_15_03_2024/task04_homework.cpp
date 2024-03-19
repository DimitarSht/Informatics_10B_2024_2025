#include<iostream>
using namespace std;
/*
Задача 4:
Напишете функция, която приема като
параметър масив и връща нов масив
от масиви за всеки елемент от
оригиналния масив.
Всеки подмасив в новия масив се състои
от съответния
елемент в оригиналния масив
и всеки подмасив има толкова елементи,
колко са елементите на
оригиналния масив.
Примери:
multiply(["A "B "C "D "E"])
-> [["A "A "A "A "A"], ["B "B "B "B "B"],
["C "C "C "C "C"], ["D "D "D "D "D"],
["E "E "E "E "E"]
*/
char newArr[1024][1024];

void multiply(string str)                           //, char newArr[str.length()][])
{
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = 0; j < str.length(); j++)
        {
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    cin>>str;
    multiply(str);
    return 0;
}
