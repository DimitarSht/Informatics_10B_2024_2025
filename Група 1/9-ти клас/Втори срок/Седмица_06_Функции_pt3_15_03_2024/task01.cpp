#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
Даден е низ от малки латински букви.
Напишете програма long, която намира в
този низ най-дългия подниз, състоящ
се от еднакви букви. Ако има няколко такива подниза,
вашата програма трябва да
намери този, в който повтарящата се буква е
най-голямата според наредбата на азбука.
*/
void lng(string masiv){
    int br = 1, naj_mnogo = 0;
    string bukva;
    for(int i = 1; i <= masiv.length(); i++){
        if(masiv[i-1] == masiv[i]){
            br++;
        }else{
            if(br > naj_mnogo){
                naj_mnogo = br;
                bukva = masiv[i-1];
            }
            br = 1;
        }
    }
}
int main()
{

    return 0;
}
