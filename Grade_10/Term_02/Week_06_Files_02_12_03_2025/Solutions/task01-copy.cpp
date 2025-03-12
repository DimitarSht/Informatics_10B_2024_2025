#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void func(ifstream &in, ofstream &out)
{
    string line;
    while(!in.eof())
    {
        getline(in, line);
        out<<line<<endl;
    }
}

int main()
{
    ifstream in("task01.cpp");
    ofstream out("task01-copy.cpp");
    if(!in.is_open())
    {
        cout<<"Error!"<<endl;
        return -1;
    }
    if(!out.is_open())
    {
        cout<<"Error!"<<endl;
        return -1;
    }
    func(in, out);
    in.close();
    out.close();



    return 0;
}

