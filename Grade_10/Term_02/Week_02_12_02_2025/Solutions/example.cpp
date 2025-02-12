#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int height;
    int grade;
};

struct Clas
{
//    Student students[30];
    Student *students;
    int currentSize;
    int maxCapacity;
};

struct Vipusk
{
    Clas* klasove;
    int broiKlasove;
    int maximaleBroiKlasove;
};

struct School
{
    Vipusk* vipuski;
    int broiVipuski;
    int maximalenBroiVipuski;
};


int main()
{
    Student s1;
    cin>>s1.name;


    Student arr[100];
    for(int i = 0; i < 100; i++)
    {
        cin>>arr[i].name>>arr[i].age;
    }

    Clas deseti_B;
    cin>>deseti_B.currentSize;
    cin>>deseti_B.maxCapacity;
    for(int i = 0; i < deseti_B.currentSize; i++)
    {
        cin>>deseti_B.students[i].age;
    }


    School NPMG;
    cin>>NPMG.vipuski[0].klasove[0].students[0].age;
    cin>>NPMG.vipuski[0].klasove[0].students[0].name;



    return 0;
}
