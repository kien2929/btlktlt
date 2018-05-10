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
// ham tim kiem nhi phan recursive
int timkiemnhiphan(int a[],int t, int low, int hight)
{
	while(low<=hight)
	{
		int mid = (low+hight)/2;
		if(a[mid]==t)
			return mid;
		else if (t<a[mid])
		{
			return timkiemnhiphan(a, t, low, mid-1);
		}
		else
		{
			return timkiemnhiphan(a, t, mid+1, hight);
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
	int k=timkiemnhiphan(a,t,0,n);
	if(k<0) printf("\nKhong tim thay"); else printf("\na[%d]=%d",k,a[k]);
}	
