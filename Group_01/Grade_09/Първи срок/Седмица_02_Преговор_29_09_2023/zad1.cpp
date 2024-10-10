#include<iostream>
using namespace std;
int main()
{
    int a,prowerka,broqch=0;
    cin>>a;
    prowerka=a/2;
    while(prowerka!=1){
            if(a%prowerka==0){
                broqch++;
            }
        prowerka--;
    }
    if(broqch!=0){
        cout<<"chisloto ne e prosto";
    }
    else cout<<"chisloto e prosto";
return 0;
}
