#include<stdio.h>
#include<stdlib.h>
/*
	Napisz funkcję odwracającą podany łańcuch znaków, tzn. funkcję o prototypie
	void odwroc( char *s, char *t );
	W łańcuchu s pojawi się zapisany od końca łańcuch t.
*/
int sizeOfArrayContent(char *arrayContent, int arraySize)
{
	int i = 0, size = 0;
	for (i = 0; i < arraySize; i++)
	{
		if (arrayContent[i] == '\n')
			break;
		size++;

	}
	return size;
}

void odwroc(char *s, int sSize, char *t, int tSize)
{
	int size = 0, i = 0; 
	// sprawdzanie dlugosci ciagu i tworzenie ciagu odwroconego.
	size = sizeOfArrayContent(t,tSize);
	for (i = 0; i < size; i++)
	{
		s[size -1 - i] = t[i];
	}
	printf("\n%s\n", s);
}

main()
{
	char s[1024] = { 0 }, t[1024] = { 0 };	// tablice przechowujace ciagi znakow
	// pobieranie ciagu znakow od uzytkownika
	printf("Podaj lancuch znakow: ");		
	fgets(t, 1024, stdin);

	odwroc(s, 1024, t, 1024);

	system("PAUSE");
	return 0;
}