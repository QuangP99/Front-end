#include<iostream>
using namespace std;
#define MAX 50
void thong_ke_TSXH(int a[], int na);
void nhap(int a[], int na);
void xuat(int a[], int na);
void them(int a[], int& na, int x, int vt);
void xoa(int a[], int& na, int vt);
void SX_tang(int a[], int na);
void SX_co_DK(int a[], int na);
int main()
{
	/*int a[MAX]; int na = 0;
	do
	{
		cout << "Nhap so luong PT mang: "; cin >> na;
	} while (na<0 || na>MAX);
	nhap(a, na);*/
	int a[MAX] = { -4,5,0,6,-1,0,8,3,-11,15,2,1 };
	int na = 12;
	xuat(a, na);
	SX_co_DK(a, na);
	//thong_ke_TSXH(a, na);
	xuat(a, na);
	return 0;
}
void nhap(int a[], int na)
{
	cout << "\t\t========== Nhap ===========" << endl;
	for (int i = 0;i < na;i++)
	{
		cout << "Nhap Pt thu " << i<<": ";  cin >> a[i];
	}
	
}
void xuat(int a[], int na)
{
	cout << "\t\t========== xuat ===========" << endl;
	for (int i = 0;i < na;i++)
	{
		cout << "Pt thu "<<i<<" la: " << a[i]<<endl;
	}

}
void them(int a[], int &na, int x, int vt)
{
	for (int i = na - 1;i >= 0;i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	na++;
}
void xoa(int a[], int &na, int vt)
{
	for (int i = vt; i < na; i++)
	{
		a[i] = a[i + 1];
	}
	na--;
}
void thong_ke_TSXH(int a[], int na)
{
	for (int i = 0; i < na;i++)
	{
		bool kt = false;
		for (int j = 0; j < i;j++)
		{
			if (a[j] == a[i])
			{
				kt = true;
				break;
			}
		}
		if (kt == false)
		{
			int dem = 1;
			for (int j = i + 1;j < na;j++)
			{
				if (a[j] == a[i])
				{
					dem += 1;
				}
			}
			cout << "Phan tu " << a[i] << " lap " << dem << " lan" << endl;
		}
	}
	
	
}
void SX_tang(int a[], int na)
{
	for (int i = 0;i < na;i++)
	{
		for (int j = i + 1;j < na;j++)
		{
			if (a[j] < a[i])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void SX_co_DK(int a[],int na)
{
	SX_tang(a, na);
	for (int i = 0; i < na;i++)
	{
		for (int j = i + 1;j < na;j++)
		{
			if (a[i] < 0 && a[j] < 0)
			{
				if (a[j] > a[i])
				{
					swap(a[i], a[j]);
				}
			}
			else if (a[i] > 0 && a[j] > 0)
			{
				if (a[j] > a[i])
				{
					swap(a[i], a[j]);
				}
			}
		}
	}
}