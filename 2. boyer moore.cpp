#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 256
int main ()
{
	
	char a[max],b[max];
	int i,j,m,n;
	printf("\n nhap vao chuoi:");gets(a);
	printf("\n nhap vao xau:");gets(b);
	m=strlen(a);
	n=strlen(b);
	i=n-1;
	while(i<m){
		if(a[i]==b[n-1]){ 
			for(j=i-1;j>0;j--)
			b[j]==a[i-n+j+1];
		
			printf("\nvi tri xuat hien cua xau la %d ",i-n+2);
			
		}
		i++;
		
	           }
	          
 
	return 0;
}

