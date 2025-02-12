#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int height;
    int grade;
    int notes[10];
};

struct Clas
{
//    Student students[30];
    Student *students;
    int currentSize;
    int maxCapacity;
};

void addNotes(Student &s, int *newNotes, int sz)
{
    for(int i = 0; i < sz; i++)
    {
        s.notes[i] = newNotes[i];
    }
}

void addStudent(Clas &c, Student &s)
{
    if(c.currentSize == 0)
    {
        c.students = new Student[c.maxCapacity];
    }
    c.students[c.currentSize] = s;
    c.currentSize++;
}

int main()
{
    Student s1, s2, s3;
    int *notes = new int[3];
    for(int i = 0; i < 3; i++)
    {
        cin>>notes[i];
    }
    addNotes(s1, notes, 3);
    addNotes(s2, {5,5,5}, 3);
    addNotes(s3, {6,6,6}, 3);

//    Clas deseti_B; /// празен масив от ученици, 0 за текущ размер и 0 за максимален размер
//    deseti_B.maxCapacity = 10;
    Clas deseti_B = {nullptr, 0, 10};

    addStudent(deseti_B, s1);
    addStudent(deseti_B, s2);
    addStudent(deseti_B, s3);
    cout<<deseti_B.students[0].notes[0];

    return 0;
}
