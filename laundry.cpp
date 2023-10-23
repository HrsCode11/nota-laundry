#include <stdio.h>
#include <iostream>
#include <cstring>
#include <windows.h>
#include <ctime>


using namespace std;
garis(){
    cout << "---------------------------------" << endl;	
}

int main() {
    char nama[50], nomor_hp[15], alamat[30], switchKategori[45], kategori, jenisBarang[20], nama_barang;
    int harga, total_bayar, berat, total, tanggalKembali, bulanKembali, tahunKembali;
    time_t now = time(0);
    tm* date = localtime(&now);

    cout << "=================================" << endl;
    cout << "\tCia-Cio Laundry" << endl;
    cout << "=================================" << endl << endl;

    cout << "\tData Customer Laundry" << endl;
    garis();
    cout << "Nama Customer   : "; cin >> nama;
    cout << "No Handphone    : "; cin >> nomor_hp;
    cout << "Alamat          : "; cin >> alamat;    
    cout << "Tanggal Terima  : " << (date->tm_year + 1900) << '-' << (date->tm_mon + 1) << '-' << date->tm_mday << endl;    
    cout << "Tanggal Kembali (DD MM YYYY): ";
    cin >> tanggalKembali >> bulanKembali >> tahunKembali;
    garis();

    system("cls");    
    cout << "\tJenis Barang" << endl;
    garis();
    cout << "1. Pakaian" << endl;
    cout << "2. Seprei" << endl;
    cout << "3. Gorden" << endl;
    garis();
    
    cout << "Pilih No Jenis Barang [1-3]  : "; cin >> nama_barang;
    switch (nama_barang) {
        case '1':
            strcpy(jenisBarang, "Pakaian");
            break;
        case '2':
            strcpy(jenisBarang, "Seprei");
            break;
        case '3':
            strcpy(jenisBarang, "Gorden");
            break;
        default:
            strcpy(jenisBarang, "Nomor Kategori Yang Dimasukkan Salah");
            break;
    }

    system("cls");
    cout << "\tKategori Cucian" << endl;
    garis();
    cout << "1. Reguler (2 Hari)" << endl;
    cout << "2. Ekspress (1 Hari)" << endl;
    cout << "3. Kilat (3 Jam)" << endl;
    garis();
    
    cout << "Pilih No Kategori [1-3]  : "; cin >> kategori;
    switch (kategori) {
        case '1':
            strcpy(switchKategori, "Paket Reguler");
            harga = 10000;
            break;
        case '2':
            strcpy(switchKategori, "Paket Ekspress");
            harga = 12000;
            break;
        case '3':
            strcpy(switchKategori, "Paket Kilat");
            harga = 15000;
            break;
        default:
            strcpy(switchKategori, "Nomor Kategori Yang Dimasukkan Salah");
            break;
    }

    cout << "Berat Cucian (Kg)        : "; cin >> berat;
    cout << "-------------------------------------------" << endl;
    
    system("cls");
    cout << "\tDetail Pemesanan Ciao-Cio Laundry" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Nama Customer     : " << nama << endl;
    cout << "No. Handphone     : " << nomor_hp << endl;
    cout << "Alamat            : " << alamat << endl;
    cout << "Tanggal Terima    : " << (date->tm_year + 1900) << '-' << (date->tm_mon + 1) << '-' << date->tm_mday << endl;
    cout << "Tanggal Kembali   : " << tahunKembali << '-' << bulanKembali << '-' << tanggalKembali << endl;
    garis();
    cout << "Jenis Barang      : " << jenisBarang << endl;
    cout << "Berat Cucian      : Kg." << berat << endl;   
    cout << switchKategori << "    : Rp. " << harga << endl;
    garis();
    total = harga * berat;
    cout << "Total Harga     : Rp. " << total << endl;
    return 0;
}

