#include<iostream>
using namespace std;

struct Marker
{
    string color;
    string form;
    string brand;
    double price;
    bool isPermanent;
    bool doesWrite;
};

struct Student
{
    string name;
    int grade;
    int numberInClass;
    int *notes; /// масив от оценки 
    int maxNumberOfNotes;
};

struct Class
{
    int numberOfStudents;
    int maxNumberOfStudents;
    Student* students; /// масив от ученици
};

int main()
{
    /// Заделяме динамично памет за един маркер
    Marker *m1 = new Marker;
    /// Достъпваме различните член-данни на обекта m1 чрез оператор "->"
    cin>>m1->color>>m1->brand>>m1->price;

    cout<<m1->color<<" "<<m1->brand<<" "<<m1->price;

    /// Трябва да освободим паметта, щом сме я заделили динамично
    delete m1; 


    /// Заделяме статично памет за нов маркер
    Marker m2;
    /// Достъпваме различните член-данни на обекта m2 чрез оператор "."
    cin>>m2.brand>>m2.color>>m2.doesWrite;

    cout<<m2.brand<<m2.color<<m2.doesWrite;

    /// Не е нужно да освобождаваме паметта, заделена за m2

    return 0;
}
