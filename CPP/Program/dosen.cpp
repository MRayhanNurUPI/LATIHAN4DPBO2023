#include "header.hh"

// == Kelas Dosen ==

// Constructors
Dosen::Dosen()
{
    this->NIP = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}

Dosen::Dosen(string NIP, string pend_terakhir, string keahlian)
{
    this->NIP = NIP;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

Dosen::Dosen(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi, string nip, string pend_terakhir, string keahlian) : SivitasAkademik(nik, nama, jk, asal_universitas, email_edu, fakultas, prodi)
{
    this->NIP = nip;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// Getter and Setter
string Dosen::getNIP()
{
    return this->NIP;
}
string Dosen::getPendidikanTerakhir()
{
    return this->pend_terakhir;
}
string Dosen::getKeahlian()
{
    return this->keahlian;
}

void Dosen::setNIP(string nip)
{
    this->NIP = nip;
}
void Dosen::setPendidikanTerakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}
void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

// Destructors
Dosen::~Dosen()
{
}