#include<iostream>
using namespace std;
int main()
{
    int razmer; /// размер на масива
    cout<<"Vavedi razmer na masiva:"<<endl;
    cin>>razmer;  /// въвеждаме размер на масива

    int masiv[razmer]; /// декларираме масив от тип int
                        ///с име masiv и размер razmer
    /// въвеждаме масива
    for(int i = 0; i < razmer; i++)
    {
        cout<<"Element na poziciq: "<<i<<endl;
        cin>>masiv[i];
    }
    /// извеждаме, като слагаме интервал м/у елементите за четимост
    for(int i = 0; i < razmer; i++)
    {
        cout<<masiv[i]<<" ";
    }

    /*int masiv[5] = {4,7,8,6,9};
    cout<<masiv[0]<<" "<<masiv[1]<<" "<<
        masiv[2]<<" "<<masiv[3]<<" "<<
        masiv[4]<<" "<<masiv[5];
*/

return 0;
}
