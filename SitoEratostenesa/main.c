#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int i;
    int j;
    int q;

    printf("Algorytm wypisujacy liczby pierwsze mniejsze od N metoda sita Eratostenesa\n");
    FILE *plik = fopen("nte.txt", "r");                                                           \\otwarcie wskazanego pliku
    printf("Plik powinien zawierac 10 zmiennych\n");
    if(plik==NULL)
    {                                                                                             \\informacja o błedzie w sytuacji gdy zlokalizowanie pliku jest niemożliwe
        perror("NIE MOZNA ZLOKALIZOWAC PLIKU NTE\n");
        exit(0);
    }
    printf("Plik otwarty pomyslnie\n");
    int tabx[10];


    for(int k=0; k<10; k=k+1)                                                                    \\wybranie liczby n z wczytanego pliku za pomocą pętli
    {
        n=tabx[k];
        printf("Obliczanie dla liczby:");
        printf("%d", n);

        int liczby[n];
        int liczbygotowe[n];

        for(int i=0; i<n; i=i+1)                                                                 \\wypełnienie dwóch tablic wartościami od 0 do n
        {
            liczby[i]=1+i;
            liczbygotowe[i]=1+i;
        }
        printf("\n");
        for(int i=1; liczbygotowe[i]*liczbygotowe[i]<=n; i=i+1)                                  \\sprawdzenie, czy wybrana liczba ze zbioru <2,n> jest mniejsza lub równa od pierwiastka z n                            
        {                                                                                          
            for(int q=2; liczbygotowe[i]*q<=n; q=q+1)                                            \\zapewnienie, że z tablicy nie zostanie usunięta wartość równa i, deklarując q=2                                 
                
   
            {
                liczby[(liczby[i]*q)-1]=0;                                                       \\zamienienie na 0 wartości tych komórek, których zawartość to wielokrotność liczby i
            }
        }
        printf("Liczby pierwsze mniejsze od podanego N to:\n");
        for(int i=0; i<n; i=i+1)
        {
            if(liczby[i]!=0)
            {
                printf("%d", liczbygotowe[i]);
                printf("\n");
            }

        }
    }
}
