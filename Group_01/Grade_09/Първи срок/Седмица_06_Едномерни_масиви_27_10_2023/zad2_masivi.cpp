#include<iostream>
using namespace std;
int main()
{
   int razmer, broqch = 0;
   cout<<"Vavedi razmer na masiva:"<<endl;
   cin>>razmer;
   int masiv[razmer];
   cout<<"Vavedi masiv:"<<endl;
   for(int i = 0; i < razmer; i++)
   {
       cin>>masiv[i];
   }

   for(int i = 0; i < razmer; i++)
   {
       if(masiv[i] == 0)
       {
           broqch++;
       }
   }
   cout<<"Broi nuli v masiva: "<<broqch;

return 0;
}
