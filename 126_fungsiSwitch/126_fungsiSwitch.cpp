

#include <iostream>
using namespace std;

int a, b;

void input;
{
	cout << "Bilangan pertama = ";
	cin >> a;

	cout << "Bilangan keduaa = ";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}

int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
}

int perkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
}

int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
}
int main()
{
	int pilihan;

	do {
		system("cls");
		cout << "=====Menu=====" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. pembagian" << endl;
		cout << "Masukkan menu yang ingin di pilih (1/2/3/4/5" << endl;
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			input();
			cout << "Hasil penjumlahan = " << penjumlahan(a, b) << endl;
			system("pause");
			break;
		case 2:
			input();
			cout << "Hasil pengurangan = " << pengurangan(a, b) << endl;
			system("pause");
			break;

		case 3:
			input();
			cout << "Hasil perkalian = " << perkalian(a, b) << endl;
			system("pause");
			break;
		}
	}
}
 