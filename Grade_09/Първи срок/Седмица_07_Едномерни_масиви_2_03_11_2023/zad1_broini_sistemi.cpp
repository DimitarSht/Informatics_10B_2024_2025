#include<iostream>
#include<cmath>
using namespace std;
int main()

/*
Да се състави програма, която по въведено естествено число >=1,
чрез цикъл while, го преобразува в N-ична бройна система,
където N е от интервала [2..9].
Входни данни br - естествено число [2..999].
Пример: 9,2 Изход: 1001 при избрана 2-ична бройна система
*/

{
    int br, N, new_number = 0, counter = 0;
    cout<<"Enter number:"<<endl;
    cin>>br;
    cout<<"Enter number system:"<<endl;
    cin>>N;

    while(br != 0)
    {
        new_number += (br % N) * pow(10,counter);
        br /= N;
        counter++;
    }
    cout<<new_number;
    return 0;
}
