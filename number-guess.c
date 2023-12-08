//1-10 arasý sayi tahmin oyunu yap
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{  
	
	int sayi,girilen;
	srand(time(NULL));
	sayi=rand()%10;
	enbas:
	printf("lutfen tahmininizi yaziniz : ");
	scanf ("%d",&girilen);
	if (girilen==sayi)
	{
		printf ("tebrikler dogru bildiniz !!\n");
		system("pause");
		return 0 ;
	}
	else if (girilen<sayi)
	{	
		printf ("tahmininiz kucuk kaldi !\n");
		
	}
	else if (girilen>sayi)
	{
		printf("tahmininiz buyuk kaldi !\n");
	}
	
	goto enbas;
	
	
	
	
	
	
	
	
	
	
}























