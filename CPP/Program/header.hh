// Mendeklarasi library yang digunakan
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <list>

using namespace std;

class Course
{
    // ATRIBUT
private:
    string nama_matakuliah;
    int jumlahSKS;

public:
    // METHODS
    // Constructors
    Course();
    Course(string matkul, int jmlSKS);

    // Getter and Setter
    string getNamaMatkul();
    int getJumlahSKS();
    void setNamaMatkul(string matkul);
    void setJumlahSKS(int jmlSKS);

    // Destructor
    ~Course();
};

class ProgramStudi
{
private:
    // ATRIBUT
    string nama_prodi;
    string kode;
    list<Course> courses;

public:
    // METHODS
    // Constructors
    ProgramStudi();
    ProgramStudi(string nama_prodi, string kode);

    // Getter and Setter
    string getNamaProdi();
    string getKodeProdi();
    list<Course> getCourses();
    void showCourses();
    void setNamaProdi(string nama_prodi);
    void setKodeProdi(string kode);
    void addCourse(Course matkul);

    // Destructor
    ~ProgramStudi();
};

// Parent Class : Human
class Human
{
private:
    // ATRIBUT
    string NIK, nama;
    char jenis_kelamin;

public:
    // METHODS
    // Constructors
    Human();
    Human(string nik, string nama, char jk);

    // Setter and Getter
    string getNIK();
    string getNama();
    char getJenisKelamin();
    void setNIK(string nik);
    void setNama(string nama);
    void setJenisKelamin(char jk);

    // Destructor
    ~Human();
};

class SivitasAkademik : public Human
{
private:
    // ATRIBUT
    string asal_universitas;
    string email_edu;
    string fakultas;
    ProgramStudi *prodi;

public:
    // METHODS
    // Constructors
    SivitasAkademik();
    SivitasAkademik(string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi);
    SivitasAkademik(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi);

    // Getter and Setter
    string getAsalUniv();
    string getEmailUniv();
    string getFakultas();
    ProgramStudi *getProdi();
    void setAsalUniv(string asal_universitas);
    void setEmailUniv(string email_universitas);
    void setFakultas(string fakultas);
    void setProdi(ProgramStudi *prodi);

    // Destructor
    ~SivitasAkademik();
};

class Dosen : public SivitasAkademik
{
private:
    // ATRIBUT
    string NIP;
    string pend_terakhir;
    string keahlian;

public:
    // METHODS
    // Constructors
    Dosen();
    Dosen(string NIP, string pend_terakhir, string keahlian);
    Dosen(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi, string nip, string pend_terakhir, string keahlian);

    // Getter and Setter
    string getNIP();
    string getPendidikanTerakhir();
    string getKeahlian();

    void setNIP(string nip);
    void setPendidikanTerakhir(string pend_terakhir);
    void setKeahlian(string keahlian);

    // Destructors
    ~Dosen();
};

class Mahasiswa : public SivitasAkademik
{
private:
    // ATRIBUT
    string NIM;
    int semester;

public:
    // METHODS
    // Constructors
    Mahasiswa();
    Mahasiswa(string nim, int semester);
    Mahasiswa(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi, string nim, int semester);

    // Setter and Getter
    string getNIM();
    int getSemester();
    void setNIM(string nim);
    void setSemester(int semester);

    // Destructors
    ~Mahasiswa();
};