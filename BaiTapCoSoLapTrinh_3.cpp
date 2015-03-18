/* VĂN ĐÌNH HƯNG _ CNTT 08-01
Chương trình tính n! với n>=0 */
#include <iostream>
using namespace std;
void main()
{
	int n;
	do
	{
		cout << "Nhap vao so n : ";
		cin >> n;	cin.ignore();
		if (n < 0)
			cout << "Khong phai la so nguyen duong, nhap lai !! ";
	} 
	while (n < 0);
	int kq = 1, i;
	for (i = 1; i <= n; i++)
	{
		kq *= i;
	}
	cout << "Giai thua cua " << n << " la " << kq;
	cin.get();
}