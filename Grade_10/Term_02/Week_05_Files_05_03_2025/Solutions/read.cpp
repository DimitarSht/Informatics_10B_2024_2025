#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream file("text.txt", ios::in);
    if(!file.is_open())
    {
        cout<<"Error!"<<endl;
        return -1;
    }
    string line;
    while(!file.eof())
    {
        //file >> line;
        getline(file, line);
        cout<<line<<'\n';
    }
    file.close();

    file.open("text.txt", ios::app);
    if(!file.is_open())
    {
        cout<<"Error!"<<endl;
        return -1;
    }
    file << "!!!";
    file.close();
//    cout<<line;
    return 0;
}
