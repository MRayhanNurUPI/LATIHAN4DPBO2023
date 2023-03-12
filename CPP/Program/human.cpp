#include "header.hh"

// == KELAS HUMAN ==

// Constructors
Human::Human()
{
    NIK = "";
    nama = "";
    jenis_kelamin = '-';
}

Human::Human(string nik, string nama, char jk)
{
    this->NIK = nik;
    this->nama = nama;
    this->jenis_kelamin = jk;
}

// Getter and Setter
string Human::getNIK()
{
    return this->NIK;
}
string Human::getNama()
{
    return this->nama;
}
char Human::getJenisKelamin()
{
    return this->jenis_kelamin;
}
void Human::setNIK(string nik)
{
    this->NIK = nik;
}
void Human::setNama(string nama)
{
    this->nama = nama;
}
void Human::setJenisKelamin(char jk)
{
    this->jenis_kelamin = jk;
}

// Destructor
Human::~Human() {}