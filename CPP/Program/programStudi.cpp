#include "header.hh"

// == Kelas ProgramStudi ==

// METHODS
// Constructors
ProgramStudi::ProgramStudi()
{
    this->nama_prodi = "";
    this->kode = "";
}

ProgramStudi::ProgramStudi(string nama_prodi, string kode)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
}

// Getter and Setter
string ProgramStudi::getNamaProdi()
{
    return this->nama_prodi;
}

string ProgramStudi::getKodeProdi()
{
    return this->kode;
}

void ProgramStudi::showCourses()
{
    if (this->courses.size() == 0)
    {
        cout << "List Mata Kuliah Program Studi ini Kosong." << endl;
    }
    else
    {
        for (list<Course>::iterator it = this->courses.begin(); it != this->courses.end(); it++)
        {
            cout << "       - " << it->getNamaMatkul() << " - " << it->getJumlahSKS() << " SKS";
            cout << "\n";
        }
    }
}

list<Course> ProgramStudi::getCourses()
{
    return this->courses;
}

void ProgramStudi::setNamaProdi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

void ProgramStudi::setKodeProdi(string kode)
{
    this->kode = kode;
}

void ProgramStudi::addCourse(Course matkul)
{
    this->courses.push_back(matkul);
    // this->showCourses();
}

// Destructor
ProgramStudi::~ProgramStudi()
{
}
