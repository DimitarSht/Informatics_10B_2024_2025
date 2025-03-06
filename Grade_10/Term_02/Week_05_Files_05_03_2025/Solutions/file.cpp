#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("numbers.txt", ios::in);
    if(!file.is_open())
    {
        cout<<"Error!"<<endl;
        return -1;
    }
    int n, m;
    file >> n >> m;
    n *= 10;
    file.close();
    file.open("numbers.txt", ios::out);
    file<<n <<" "<< m;
    file.close();
}
