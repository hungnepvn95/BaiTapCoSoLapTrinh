/* VĂN ĐÌNH HƯNG _ CNTT 08-01
Bài tập 59 - Trang 52 */
#include <iostream>
using namespace std;
void nhap(int a[], int &n, int b[], int &m);
void noimang(int a[], int &n, int b[], int &m, int c[], int &v);
#define MAX 100
void main()
{
	int a[MAX], b[MAX], c[MAX], n, m, v;
	nhap(a, n, b, m);
	cout << "\nMang c = ";
	noimang(a, n, b, m, c, v);
	cin.ignore();	 cin.get();
}
void nhap(int a[], int &n, int b[], int &m)
{
	cout << "Nhap vao phan tu n = ";	cin >> n;
	for (int i = 0; i < n; i++) { cout << "a [" << i << "]= ";	cin >> a[i]; }
	cout << "\nNhap vao phan tu m = ";	cin >> m;
	for (int j = 0; j < m; j++) { cout << "b [" << j << "]= ";	cin >> b[j]; }
}
void noimang(int a[], int &n, int b[], int &m, int c[], int &v)
{
	int i = 0, j = 0, k = 0;
	v = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{c[v++] = a[i];	k++;}
	}
	for (int j = 0; j < m; j++)
	{
		if (b[j] % 2 == 0)
		{c[v++] = b[j];	k++;}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{c[v++] = a[i];	k++;}
	}
	for (int j = 0; j < m; j++)
	{
		if (b[j] % 2 != 0)
		{c[v++] = b[j];	k++;}
	}
	for (int v = 0; v < k; v++)
	{cout << c[v] << " ";}
}