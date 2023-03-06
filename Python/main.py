# Import Class-Class yang digunakan 
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from ProgramStudi import ProgramStudi

# Deklarasi dan Inisialisasi List Mahasiswa dan Dosen
listMahasiswa:Mahasiswa = []
listDosen:Dosen = []

# Instansiasi 3 objek program studi
ilkom = ProgramStudi("Ilmu Komputer", "ILKOM")
penmat = ProgramStudi("Pendidikan Matematika", "PENMAT")
teksip = ProgramStudi("Teknik Sipil", "TEKSIP")

# Instansiasi masing-masing 2 objek mahasiswa untuk setiap program studi yang telah dibuat
mhsIlkom1 = Mahasiswa("112233", "Muhammad Rayhan Nur", 'L', "UPI", "m.rayhan.nur@upi.edu", "FPMIPA", ilkom, "2100192")
mhsIlkom2 = Mahasiswa("445566", "Rifqi Fajar", 'L', "UPI", "qijar@upi.edu", "FPMIPA", ilkom, "2102199")

mhsPenmat1 = Mahasiswa("54321", "Riscko", 'L', "UPI", "ckoyahud@upi.edu", "FPMIPA", penmat, "2108612")
mhsPenmat2 = Mahasiswa("98765", "Ajeng", 'P', "UPI", "park@upi.edu", "FPMIPA", penmat, "2100212")

mhsTeksip1 = Mahasiswa("444444", "Sukmaja", 'L', "UPI", "sukmaTeksip@upi.edu", "FPTK", teksip, "2002731")
mhsTeksip2 = Mahasiswa("999999", "Junebug", 'P', "UPI", "jun3bug@upi.edu", "FPTK", teksip, "2019004")

# Instansiasi masing-masing 1 objek Dosen untuk setiap Program Studi yang telah dibuat
dosenIlkom = Dosen("1000001", "Ujang Mabro", 'L', "UPI", "ujangmabro@upi.edu", "FPMIPA", ilkom, "10101010", "S3", "Software Development")
dosenPenmat = Dosen("2000002", "Sri Wahyuni", 'P', "UPI", "wahsri@upi.edu", "FPMIPA", penmat, "20202020", "S2", "Teori Bilangan")
dosenTeksip = Dosen("3000003", "Budi Santoso", 'L', "UPI", "budsans@upi.edu", "FPTK", teksip, "30303030", "S2", "Pakar Beton")

# Menambahkan masing-masing 2 objek course ke setiap program studi yang telah dibuat
ilkom.addCourse("Desain dan Pemrograman Berorientasi Objek", 3)
ilkom.addCourse("Sistem Operasi", 2)

penmat.addCourse("Persamaan Diferensial Biasa", 3)
penmat.addCourse("Kalkulus Multivariabel", 2)

teksip.addCourse("Fisika Teknik", 2)
teksip.addCourse("Mekanika Bahan", 3)

# Menambahkan objek-objek mahasiswa yang telah dibuat ke dalam list Mahasiswa
listMahasiswa.append(mhsIlkom1)
listMahasiswa.append(mhsIlkom2)
listMahasiswa.append(mhsPenmat1)
listMahasiswa.append(mhsPenmat2)
listMahasiswa.append(mhsTeksip1)
listMahasiswa.append(mhsTeksip2)

# Menambahkan objek-objek dosen yang telah dibuat ke dalam list Dosen
listDosen.append(dosenIlkom)
listDosen.append(dosenPenmat)
listDosen.append(dosenTeksip)

# Menampilkan List Mahasiswa dan List Dosen beserta data-data detailnya
print("== LIST MAHASISWA ==")
for mhs in listMahasiswa:
    print(mhs.getNIM() + " " + mhs.getNama() + " - " + mhs.getProdi().getNamaProdi() + " (" + mhs.getFakultas() + ")")
    print("(+) Mata Kuliah: ")
    mhs.getProdi().getCourses()

print("")

print("== LIST DOSEN ==")
for dsn in listDosen:
    print(dsn.getNIP() + " " + dsn.getNama() + " - " + dsn.getProdi().getNamaProdi() + " (" + dsn.getKeahlian() + ")")
    


