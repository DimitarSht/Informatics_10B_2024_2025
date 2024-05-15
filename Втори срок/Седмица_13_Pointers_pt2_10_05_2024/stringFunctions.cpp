#include<iostream>
using namespace std;
/*
Имплементирайте следните функции:
-strlen (намиране на дължина на стринг)
-strcpy (копиране на стринг)
-strcat (конкатениране на стрингове)
-strcmp (лексикографско сравнение на стрингове)
*/
const int MAXSIZE = 1024;

unsigned int myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned int result = 0;
	while (*str) /// еквивалентно на (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}

/// Копираме source в dest.
/// Казваме, че в dest има достатъчно място и за двата масива.
void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)   
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

// - first < second
// 0 first == second
// + first > second
int myStrcmp(const char* first, const char* second)
{
	if (!first || !second)
		return 0; /// някаква стойност за грешка

	
	while ((*first) && (*second) && ((*first) == (*second))) 
	{
		first++;
		second++;
	}

	return (*first - *second);  /// връщаме разликата в последните символи
	 
}

void myStrcat(char* first, const char* second)
{
	if (!first || !second)
		return;
	
	int firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}

int main()
{
	char str[20] = "ABC";
	char str2[] = "XY";
	myStrCat(str, str2);

	cout << str;
}