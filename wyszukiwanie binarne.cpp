﻿#include <iostream>
using namespace std;

int funkcja(int szukana, int tab[]);
int main()
{
	int szukana;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	cout << "wpisz liczbe szukaną: ";
	cin >> szukana;
	cout << "\n";
	funkcja(szukana, tab);
	if (funkcja(szukana, tab) == -1)
	{
		cout << "nie znaleziono szukanej";
	}
	else
	{
		cout << "szukana na pozycji: " << funkcja(szukana, tab) +1;
	}
}
int funkcja(int szukana, int tab[]) 
{
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	cout << "wpisz liczbe szukaną: ";
	cin >> szukana;
	cout << "\n";
	funkcja(szukana, tab);
	if (funkcja(szukana, tab) == -1)
	{
		cout << "nie znaleziono szukanej";
	}
	else
	{
		cout << "szukana na pozycji: " << funkcja(szukana, tab) +1;
	}
}
int funkcja(int szukana, int tab[]) 
{
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;
	while (l <= p)
	{
		if (tab[sr] == szukana)
		{
			return sr;
		}
		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}
		else
		{
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	return -1;
}