#include<iostream>
#include<fstream>
using namespace std;

struct Point
{
    int x, y;
};

void input(const string &filename, Point& p, int sz)
{
    ifstream in(filename);
    if(!in.is_open())
    {
        cout<<"Error!";
        return;
    }
    in >> sz;
    for(int i = 0; i < sz; i++)
    {
        in >> points[i].x>>points[i].y;
    }
    in.close();
    return points;
}

void output(Point &p, int sz, const string& filename)
{
    ofstream out(filename);
    if(!out.is_open())
    {
        cout<<"Error!";
        return;
    }
    out << sz << endl;
    for(int i = 0; i < sz; i++)
    {
        out << p[i].x<<" "<<p[i].y<<endl;
    }
    out.close();
}

int main()
{
    int sz;
    Point p[123];
    input("input.txt", sz, p);
    output(p, sz, "output.txt");

    return 0;
}
