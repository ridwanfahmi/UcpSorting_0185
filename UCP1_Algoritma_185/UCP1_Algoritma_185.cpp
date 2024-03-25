// TYPE SOAL 2

// 1. Dengan cara membandingkan index saat ini/index 0 dengan index selanjutnya/index 1,
//    jika nilai index 0 lebih kecil dari nilai index 1 maka posisi nilai tidak di tukar, 
//    jika nilai index 0 lebih besar dari nilai index 1 maka posisi nilai ditukar di tukar.

// 2. Dengan cara membagi kumpulan element manjadi 3 grub, misalkan 0,1,2,3,4,5,6,7,8,9
//    kita bagi dengan selisih/jarak 3 element, hasilnya jadi 0,3,6,9  ;  1,4,7   ;  2,5,8
//    jika nilai index 0 lebih kecil dari nilai index 3 maka posisi nilai tidak di tukar, 
//    jika nilai index 0 lebih besar dari nilai index 3 maka posisi nilai ditukar di tukar,
//    Begitupun dengan yang lainnya.
//    Setelah nilai index tiap grub urut, lalu digabung lagi menjadi 1, 0,1,2,3,4,5,6,7,8,9
//    Lalu di bagi lagi menjadi 2 grub dengan jarak 2 element, menjadi 0,2,4,6,8  ;   1,3,5,7,9
//    jika nilai index 0 lebih kecil dari nilai index 2 maka posisi nilai tidak di tukar, 
//    jika nilai index 0 lebih besar dari nilai index 2 maka posisi nilai ditukar di tukar,
//    begitupun dengan yang lainnya.
//    Setelah urut maka di gabung lagi menjadi 1.
//    Jika kumpulan element tersebut sudah urut dari kecil ke besar maka selesai.

// 3. Algoritma Insertion sort, karena dengan ini kita tidak perlu membandingkan seluruh elementnya.




#include <iostream>
using namespace std;


int ridwan[85];
int n;


void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 85)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 85 elemen.\n";
		}

	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Eleman Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke -" << (i + 1) << ": ";
		cin >> ridwan[i];
	}
}

void selectionsort() {
	for (int j = 0; j < n - 1; j++) {
		int i = j;
		for (int i = j + 1; i < n; i++) {
			if (ridwan[i] < ridwan[j]) {
				j = i;
			}
		}
		int temp = ridwan[j];
		ridwan[j] = ridwan[i];
		ridwan[i] = temp;
	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << "Data ke -" << j + 1 << ": ";
		cout <<ridwan[j] << endl;
	}
	cout << endl;
}

int main() {
	input();
	selectionsort();
	display();
}