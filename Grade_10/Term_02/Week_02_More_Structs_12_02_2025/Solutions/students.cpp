#include<iostream>
using namespace std;

struct Note
{
    int *notes;
    int maxCapacity;
    int currSize;
};


struct Student
{
    string name;
    int age;
    int height;
    int grade;
    Note* notes;
};

struct Clas
{
//    Student students[30];
    Student *students;
    int currentSize;
    int maxCapacity;
};

void createNoteArr(Note& n)
{
    int noteToAdd;
    if(n.currSize == 0)
    {
        n.notes = new int[n.maxCapacity];
        cin>>noteToAdd;
        n.notes[n.currSize] = noteToAdd;
        n.currSize++;
    }

    for(int i = 0; i < n.currSize; i++)
    {
        cin>>noteToAdd;
        n.notes[i] = noteToAdd;
        n.currSize++;
    }
}

void addNotes(Student &s, Note& n)
{
    for(int i = 0; i < n.currSize; i++)
    {
        s.notes[i] = n.notes[i];
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
    Note n1, n2, n3;
//    s1.notes = n1;
//    s2.notes = n2;
//    s3.notes = n3;

    addNotes(s1, n1);
    addNotes(s2, n2);
    addNotes(s3, n3);

    /// Задачата ни е ефикасно да добавяме оценки
    /// за всеки един ученик
    /// Hint: Променете начина на съхраняване
    ///       на оценките
//    addNotes(s2, {5,5,5}, 3);
//    addNotes(s3, {6,6,6}, 3);

//    Clas deseti_B; /// празен масив от ученици, 0 за текущ размер и 0 за максимален размер
//    deseti_B.maxCapacity = 10;
    Clas deseti_B = {nullptr, 0, 10};

    addStudent(deseti_B, s1);
    addStudent(deseti_B, s2);
    addStudent(deseti_B, s3);

    for(int i = 0; i < deseti_B.currentSize; i++)
    {
        for(int j = 0; j < deseti_B.students[i].notes.currSize; i++)
        {
            cout<<deseti_B.students[i].notes[j]<<" ";
        }
        cout<<endl;
    }

    for(Student s : deseti_B)
    {
        for(int ocenka : s.notes)
        {
            cout<<ocenka;
        }
    }

    return 0;
}
