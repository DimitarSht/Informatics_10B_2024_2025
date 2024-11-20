#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    // Текст за анализ
    string text = R"(Това е примерен текст:
    Телефони: 088-123-4567, +359 2 987 6543
    Имейли: example@gmail.com, test.email@abv.bg
    Уебсайтове: https://www.example.com, www.test-site.org
    )";

    // Регулярни изрази за телефонни номера, имейли и URL адреси
    regex phonePattern(R"((\+?\d{1,3}[-\s]?)?(\d{3}[-\s]?\d{3}[-\s]?\d{4}))");
    regex emailPattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    regex urlPattern(R"((https?://)?(www\.)?[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    // Намиране и извеждане на телефонни номера
    cout << "Телефонни номера:\n";
    sregex_iterator phonesBegin(text.begin(), text.end(), phonePattern);
    sregex_iterator phonesEnd;
    for (sregex_iterator it = phonesBegin; it != phonesEnd; ++it) {
        cout << "- " << (*it).str() << "\n";
    }

    // Намиране и извеждане на имейли
    cout << "\nИмейли:\n";
    sregex_iterator emailsBegin(text.begin(), text.end(), emailPattern);
    sregex_iterator emailsEnd;
    for (sregex_iterator it = emailsBegin; it != emailsEnd; ++it) {
        cout << "- " << (*it).str() << "\n";
    }

    // Намиране и извеждане на URL адреси
    cout << "\nURL адреси:\n";
    sregex_iterator urlsBegin(text.begin(), text.end(), urlPattern);
    sregex_iterator urlsEnd;
    for (sregex_iterator it = urlsBegin; it != urlsEnd; ++it) {
        cout << "- " << (*it).str() << "\n";
    }

    return 0;
}
