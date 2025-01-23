#include<iostream>
using namespace std;

enum season
{
    winter,
    spring,
    summer,
    autumn
};
int main()
{
    /// enum season s1; /// променлива(обект) от тип сезон
    season s1 = winter; /// 0
    cout << s1 <<endl;
    switch(s1)
    {
    case 0:
        cout<<"winter";
        break;
    case 1:
        cout<<"spring";
        break;
    default:
        cout<<"Wrong season!";
        break;
    }


    return 0;
}
