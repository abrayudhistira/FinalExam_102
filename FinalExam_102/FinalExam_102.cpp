#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini
void tampilkanSemuaMahasiswa(
	if (empty()) {
		cout << "\nThe popped element is : " << NIM[MAX_MAHASISWA]<< endl;
	else
		cout << "\nStack is Empty. CAnnot pop." << endl;
	}
	
);
//isi disini
void algorithmacariMahasiswaByNIM(
	int ctr;
	do
	{
		int item;
		cin >> item;

		ctr = 0
		for (i = 0; i < n; i++)
		{
			ctr++
			if (NIM[i] == item)
			{
				cout << "\n" << item << "Found at Position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " Not Found in the list\n";
		return;
	}
);

//isi disini
void algorithmaSortByTahunMasuk(
	int temp; 
	int j;
	for (int i = 1; i < n; i++) 
	{
		temp = [i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			jumlahMahasiswa[j + 1] = arr[j];
			j--;
		}

		jumlahMahasiswa[j + 1] = temp;

		cout << endl;
		cout << "\nPass" << i << ": ";
		for (int k = 0; k < n; k++)
		{
			cout << jumlahMahasiswa[k] << n; ": ";
		}
	}
);

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			pilihan.tambahMahasiswa();
			break;
		case 2:
			//isi disini
			pilihan.tampilkanSemuaMahasiswa();
			break;
		case 3:
			//isi disini
			pilihan.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			//isi disini
			pilihan.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//Jawaban Soal
// 2. Stack dan Queue
// 3.Stack menggunakan Algoritma First-In-Last-Out (FILO), atau Last-In-First-Out (LIFO). Dan untuk Queue menggunakan Algoritma First-In-First-Out (FIFO).
// 4.Stack digunakan pada kondisi dimana suatu Algoritma menggunakan struktur FILO ataupun LIFO
// 5. 
//  a.4
//  b.Preorder