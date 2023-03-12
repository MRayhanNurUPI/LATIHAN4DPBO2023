#include "header.hh"

// == Kelas SivitasAkademik ==

// Constructors
SivitasAkademik::SivitasAkademik()
{
    this->asal_universitas = "";
    this->email_edu = "";
    this->fakultas = "";
}

SivitasAkademik::SivitasAkademik(string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
    this->fakultas = fakultas;
    this->prodi = prodi;
}

SivitasAkademik::SivitasAkademik(string nik, string nama, char jk, string asal_universitas, string email_edu, string fakultas, ProgramStudi *prodi) : Human(nik, nama, jk)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
    this->fakultas = fakultas;
    this->prodi = prodi;
}

// Getter and Setter
string SivitasAkademik::getAsalUniv()
{
    return this->asal_universitas;
}

string SivitasAkademik::getEmailUniv()
{
    return this->email_edu;
}

string SivitasAkademik::getFakultas()
{
    return this->fakultas;
}

ProgramStudi *SivitasAkademik::getProdi()
{
    return this->prodi;
}

void SivitasAkademik::setAsalUniv(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

void SivitasAkademik::setEmailUniv(string email_universitas)
{
    this->email_edu = email_universitas;
}

void SivitasAkademik::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

void SivitasAkademik::setProdi(ProgramStudi *prodi)
{
    this->prodi = prodi;
}

// Destructor
SivitasAkademik::~SivitasAkademik()
{
}