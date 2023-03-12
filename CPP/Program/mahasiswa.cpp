#include "header.hh"

// == Kelas Mahasiswa ==

// Constructors
Mahasiswa::Mahasiswa()
{
    this->NIM = "";
    this->semester = 1;
}
Mahasiswa::Mahasiswa(string nim, int semester)
{
    this->NIM = nim;
    this->semester = semester;
}
Mahasiswa::Mahasiswa(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi, string nim, int semester) : SivitasAkademik(nik, nama, jk, asal_universitas, email_edu, fakultas, prodi)
{
    this->NIM = nim;
    this->semester = semester;
}

// Setter and Getter
string Mahasiswa::getNIM()
{
    return this->NIM;
}
int Mahasiswa::getSemester()
{
    return this->semester;
}
void Mahasiswa::setNIM(string nim)
{
    this->NIM = nim;
}
void Mahasiswa::setSemester(int semester)
{
    this->semester = semester;
}

// Destructors
Mahasiswa::~Mahasiswa()
{
}