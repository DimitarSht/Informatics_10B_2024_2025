#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct User
{
    string username;
    string passwrd;
    string firstName;
    string lastName;
    int birthYear;
};



int main()
{
//    User user1;
//    cin>>user1.username>>user1.passwrd;
//    cin>>user1.firstName>>user1.lastName;
//    cin>>user1.birthYear;
//
//    /// Register
//    fstream file("file_register.txt", ios::app);
//    if(!file.is_open())
//    {
//        cout<<"Error!";
//        return -1;
//    }
//    file << user1.username<<" "<<user1.passwrd
//        <<" "<<user1.firstName<<" "<<user1.lastName<<" "
//        <<user1.birthYear<<endl;
//    file.close();

    /// Хвърля грешка, защото файлът neshto.txt не съществува
    /// в текущата директория.
    fstream f("neshto.txt", ios::in);
    if(!f.is_open())
    {
        cout<<"Error";
        return -1;
    }





    return 0;
}


