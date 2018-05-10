#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 500
// ham nhap xau
void nhapxau(char pattern[], char text[])
{
	printf("\n Nhap vao chuoi PATTERN: ");
	gets(pattern);
	printf("\n Nhap vao doan TEXT can tim: ");
	gets(text);
	printf("\n ----------------------------");
	printf("\n Chuoi ban dau: ");
	puts(pattern);
	printf("\n chuoi can tim: ");
	puts(text);

}

// ham tim xau
void timkiem(char pattern[], char text[], int m, int n)
{

	for(int i=0; i<=(m-n+1);i++)
	{
		if(i>m-n)
			printf("\n ko tim thay");
		else
		{
		for( int j=0; (j<n) && (text[j]==pattern[i+j]);j++)
			{
				if(j>=(n-1))
				printf("\n tim thay tai vi tri %d toi vi tri %d", i+1, i+n);
			}
		}
	}
}

int main()
{
	char pattern[MAX];
	char text[MAX];
	nhapxau(pattern, text);
	printf("\n -----------------------------");
	int m=strlen(pattern);
	int n=strlen(text);
	timkiem(pattern, text, m, n);
	getch();
}
