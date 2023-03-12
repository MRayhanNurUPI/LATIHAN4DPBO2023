#include "header.hh"

// == Kelas Course ==

Course::Course()
{
    this->nama_matakuliah = "";
    this->jumlahSKS = 2;
}
Course::Course(string matkul, int jmlSKS)
{
    this->nama_matakuliah = matkul;
    this->jumlahSKS = jmlSKS;
}

// Getter and Setter
string Course::getNamaMatkul()
{
    return this->nama_matakuliah;
}
int Course::getJumlahSKS()
{
    return this->jumlahSKS;
}
void Course::setNamaMatkul(string matkul)
{
    this->nama_matakuliah = matkul;
}
void Course::setJumlahSKS(int jmlSKS)
{
    this->jumlahSKS = jmlSKS;
}

// Destructor
Course::~Course()
{
}
