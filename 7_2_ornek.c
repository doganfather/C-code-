#include <stdio.h>
#include <stdlib.h> //realloc ve malloc fonksiyonu var 
int main() 
{
	int n;
	printf("Kac tane asal sayi yazdirmak istersiniz=");
	scanf("%d",&n);
	int mydizi[n]; //10 tane asal sayinin bulunaca�� diziyi tan�mlad�k
	int *ptrdizi;  //pointer dizimizi tan�mlad�k
	int i,j,a=0;   
	ptrdizi=(int*)malloc(sizeof(int)*5);
	int sayac=0;  //sayac 0 dan ba�lad� asal say� kontrol� i�in olu�turduk
	ptrdizi=(int*)realloc(ptrdizi,2); //realloc fonksiyonu ile asal sayimizi nbayt*2 ile y�kselttik.
	ptrdizi=mydizi; //ba�lang�� de�erini atad�k dizimizin
	for(i=2;i<100,a<n+2;i++)  //asal sayilar 2 den ba�lad��� i�in sayimizi 2 den ba�latt�k 10 tane dizi eleman�m�z olunca d�ng� bitecek
	{
	    sayac=0; //her d�ng�de sayac 0'lanacak asal sayi i�in
		for(j=2;j<i;j++) // j=2 yi 2 den ba�latt�k ��nk� asal sayilarin kurali 1 e ve kendisine b�l�nemeyen sayilar i den k���k yapt�k ve kendisine b�l�nemeyece�i anlam�n� verdik
		{
			if(i%j==0)  //i%j== b�l�p kalan� 0 a esitse 
			{
				sayac++; //sayac� ++art�rd�k 
				break; //d�ng�y� k�rd�k
			}
		}
		if(sayac==0)  //sayac 0 a esitse
		{
			mydizi[a]=i;  //i.sayiyi dizimize atad�k
			a++;  //dizimizin eleman sayisini art�rd�k
		}
	}
	for(i=0;i<n+2;i++)
	{
	    //printf("%d.dizi\n",mydizi[i]);
		printf("\n%d.Asal sayi=%d,ve adresi=%p\n",i+1,*(ptrdizi+i),(ptrdizi+i)); //kacinci asal sayi oldu�unu yazd�k ve adresteki asal sayiyi i�aret ettik ve adresini g�sterdik s�ras�yla
	}
	free(ptrdizi);
}

