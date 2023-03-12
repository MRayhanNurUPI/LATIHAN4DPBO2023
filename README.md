# LATIHAN 4 PRAKTIKUM DPBO 2023

## Janji
Saya Muhammad Rayhan Nur [2100192] mengerjakan Latihan 4 Praktikum dalam mata kuliah Desain Pemrograman Beriorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Tujuan Program
Program ini dibuat dengan tujuan untuk mengimplementasikan konsep Komposisi.

## Desain Program
![alt text](https://github.com/MRayhanNurUPI/LATIHAN4DPBO2023/blob/main/Latihan4DPBO_Muhammad%20Rayhan%20Nur_ClassDiagram.png)
Program ini menggunakan total 6 kelas yang terdiri dari:
1. Kelas Human -> Parent Class dari Kelas SivitasAkademik
2. Kelas SivitasAkademik -> Child dari Kelas Human serta Parent Class dari Kelas Dosen dan Mahasiswa
3. Kelas Dosen -> Child dari Kelas SivitasAkademik
4. Kelas Mahasiswa -> Child dari Kelas SivitasAkademik
5. Kelas ProgramStudi -> Komposisi dengan Kelas Sivitas Akademik (_SivitasAkademik "has a" ProgramStudi_)
6. Kelas Course -> Komposisi dengan Kelas ProgramStudi (_ProgramStudi "has a" Course_)

(_*Note : Pada program C++, atribut ProgramStudi pada kelas SivitasAkademik menggunakan pointer agar list Course dari ProgramStudi akan selalu ter-update ketika menambahkan Course baru ke dalam list Course_)

## Alur Program
1) Mendeklarasi List Mahasiswa dan List Dosen
2) Instansiasi beberapa objek ProgramStudi, Mahasiswa, dan Dosen.
3) Menambahkan beberapa objek Course ke dalam list Course yang merupakan atribut dari ProgramStudi.
4) Menambahkan objek-objek Mahasiswa yang telah dibuat ke dalam List Mahasiswa. Dilakukan juga untuk objek Dosen.
5) Menampilkan isi dari List Mahasiswa dan List Dosen beserta data-data detailnya dengan tujuan menunjukkan keterhubungan antara satu kelas dengan kelas lainnya.

# Dokumentasi Program saat Dijalankan
![alt text](https://github.com/MRayhanNurUPI/LATIHAN4DPBO2023/blob/main/CPP/Screenshot/Latihan4DPBO_Komposisi_CPP.png)
