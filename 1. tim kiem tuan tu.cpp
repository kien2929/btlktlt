#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#define MAX 500
// ham sap xep mang
void sapxepmang(int a[],int n)
{
 for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
     {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
 }  
// Ham tim kiem tuan tu
int timkiem(int a[], int n, int t)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==t)
		{
		return i;
		}
	}
	return -1;
}

int main()
{
	int a[MAX],n,t;
	srand(time(0));
	printf("Nhap so phan tu :" );
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{
    a[i]=rand()%100;
	}
	sapxepmang(a,n);
	printf("Cac phan tu cua mang la\n");
	for(int i=0;i<n;i++)
	{printf("a[%d]=%d\n",i,a[i]);}
	printf("\nNhap phan tu can tim kiem: ");
	scanf("%d",&t);
	int k=timkiem(a,n,t);
	if(k<0) printf("\nKhong tim thay");
	 else printf("\na[%d]=%d",k,a[k]);
}	
