// Deklarasi File Header
#include "header.hh"

int main()
{
    // Deklarasi List Mahasiswa dan Dosen
    list<Mahasiswa> listMahasiswa;
    list<Dosen> listDosen;

    // Instansiasi 3 Objek ProgramStudi
    ProgramStudi ilkom("Ilmu Komputer", "ILKOM");
    ProgramStudi penmat("Pendidikan Matematika", "PENMAT");
    ProgramStudi teksip;
    teksip.setNamaProdi("Teknik Sipil");
    teksip.setKodeProdi("TEKSIP");

    // Instansiasi masing-masing 2 objek Mahasiswa u/ setiap ProgramStudi yang telah dibuat
    // - Mahasiswa Program Studi Ilmu Komputer
    Mahasiswa mhsIlkom1("112233", "Muhammad Rayhan Nur", 'L', "UPI", "m.rayhan.nur@upi.edu", "FPMIPA", &ilkom, "2100192", 4);
    Mahasiswa mhsIlkom2("445566", "Rifqi Fajar", 'L', "UPI", "qijar@upi.edu", "FPMIPA", &ilkom, "2002199", 6);

    // - Mahasiswa Program Studi Pendidikan Matematika
    Mahasiswa mhsPenmat1;
    // (+) Mengecek Methods Setter
    mhsPenmat1.setNIK("54321");
    mhsPenmat1.setNama("Riscko");
    mhsPenmat1.setJenisKelamin('L');
    mhsPenmat1.setAsalUniv("UPI");
    mhsPenmat1.setEmailUniv("ckoyahud@upi.edu");
    mhsPenmat1.setFakultas("FPMIPA");
    mhsPenmat1.setProdi(&penmat);
    mhsPenmat1.setNIM("2208612");
    mhsPenmat1.setSemester(2);

    Mahasiswa mhsPenmat2("98765", "Ajeng", 'P', "UPI", "park@upi.edu", "FPMIPA", &penmat, "2100212", 4);

    // - Mahasiswa Program Studi Teknik Sipil
    Mahasiswa mhsTeksip1("444444", "Sukmaja", 'L', "UPI", "sukmaTeksip@upi.edu", "FPTK", &teksip, "2002731", 6);
    Mahasiswa mhsTeksip2("999999", "Junebug", 'P', "UPI", "jun3bug@upi.edu", "FPTK", &teksip, "2219004", 2);

    // Instansiasi masing-masing 1 objek Dosen u/ setiap ProgramStudi yang telah dibuat
    Dosen dosenIlkom("1000001", "Ujang Mabro", 'L', "UPI", "ujangmabro@upi.edu", "FPMIPA", &ilkom, "10101010", "S3", "Software Development");
    Dosen dosenPenmat("2000002", "Sri Wahyuni", 'P', "UPI", "wahsri@upi.edu", "FPMIPA", &penmat, "20202020", "S2", "Teori Bilangan");
    Dosen dosenTeksip("3000003", "Budi Santoso", 'L', "UPI", "budsans@upi.edu", "FPTK", &teksip, "30303030", "S2", "Pakar Beton");

    // Menambahkan masing-masing 2 objek Course u/ setiap ProgramStudi yang telah dibuat
    ilkom.addCourse(Course("Desain dan Pemrograman Berorientasi Objek", 3));
    ilkom.addCourse(Course("Sistem Operasi", 2));

    penmat.addCourse(Course("Persamaan Diferensial Biasa", 3));
    penmat.addCourse(Course("Kalkulus Multivariabel", 2));

    teksip.addCourse(Course("Fisika Teknik", 2));
    teksip.addCourse(Course("Mekanika Bahan", 3));

    // Menambahkan objek-objek mahasiswa yang telah dibuat ke dalam list Mahasiswa
    listMahasiswa.push_back(mhsIlkom1);
    listMahasiswa.push_back(mhsIlkom2);
    listMahasiswa.push_back(mhsPenmat1);
    listMahasiswa.push_back(mhsPenmat2);
    listMahasiswa.push_back(mhsTeksip1);
    listMahasiswa.push_back(mhsTeksip2);

    // Menambahkan objek-objek dosen yang telah dibuat ke dalam list Dosen
    listDosen.push_back(dosenIlkom);
    listDosen.push_back(dosenPenmat);
    listDosen.push_back(dosenTeksip);

    // Menampilkan list Mahasiswa dan list Dosen beserta data-data detailnya -> Untuk menunjukkan setiap objek terhubung
    cout << "== LIST MAHASISWA ==" << endl;
    int counter = 1;
    for (list<Mahasiswa>::iterator it = listMahasiswa.begin(); it != listMahasiswa.end(); it++)
    {
        ProgramStudi *tempProdi = it->getProdi();
        cout << counter << ") " << it->getNIM() << " " << it->getNama() << " (" << it->getJenisKelamin() << ") - " << tempProdi->getNamaProdi() << " (" << it->getFakultas() << ") - Semester: " << it->getSemester() << endl;
        cout << "   (+) Mata Kuliah di Program Studinya: " << endl;
        tempProdi->showCourses();
        cout << endl;
        counter += 1;
    }

    cout << "== LIST DOSEN ==" << endl;
    counter = 1;
    for (list<Dosen>::iterator it = listDosen.begin(); it != listDosen.end(); it++)
    {
        ProgramStudi *tempProdi = it->getProdi();
        cout << counter << ") " << it->getNIP() << " - (" << it->getPendidikanTerakhir() << ") " << it->getNama() << " - " << tempProdi->getKodeProdi() << " (" << it->getKeahlian() << ")\n";
        counter += 1;
    }

    cin.get();
    return 0;
}