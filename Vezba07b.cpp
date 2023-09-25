// Vezba07b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Brisanje elementa iz vektora
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// fja za prikaz niza
void prikaz(int a[], int n)
{
	int i;
	printf("Elementi niza su: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int main()
{
	// niz od 10 elemenata
	int niz[100] = { 0,1,2,3,4,5,6,7,7,9 }, n = 10;
	int i;
	// brisanje elementa sa indeksom 5
	for (int i = 5; i < n - 1; i++)
		niz[i] = niz[i + 1];// pomeranje elemenata u levo
	n--;// smanjivanje broja elemenata
	// prikaz elemenata niza
	prikaz(niz, n);
	// korisnik unosi indeks elementa koji se brise
	printf("Unesite indeks elem koji se brise 0-%d\n",n-1);
	int k;
	scanf("%d", &k);
	// brisanje elementa sa indeksom k
	for (int i = k; i < n - 1; i++)
		niz[i] = niz[i + 1];// pomeranje elemenata u levo
	n--;
	prikaz(niz, n);
	// brisanje svih elemenata sa zadatom vrednoscu
	printf("Unesite vrednost elem koji se brise\n");
	int v;
	scanf("%d", &v);
	for (int i = 0; i < n; i++)
		if (niz[i] == v)
		{
			for (int j = i; j < n - 1; j++)
				niz[j] = niz[j + 1];// pomeranje elemenata u levo
			n--;
			i--;// da bi se proverio i sledeci element
			// break; // ako se brise samo prvi element 
		}
	prikaz(niz, n);
	return 0;
}
