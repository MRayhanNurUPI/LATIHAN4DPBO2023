# Import Class yang digunakan
from Course import Course 

class ProgramStudi:
    # Kelas ProgramStudi memiliki hubungan:
    # - Agregasi dengan Kelas SivitasAkademik
    # - Komposisi dengan Kelas Course

    # Hubungan Komposisi dengan Kelas Course digunakan karena Course atau Mata Kuliah merupakan part-of Program Studi.
    # Hal tersebut bermakna ketika Program Studi dihapus, maka Course juga akan terhapus.

    # ATRIBUT
    __nama_prodi = ""
    __kode = ""
    __courses = []

    # METHOD
    # Constructor
    def __init__(self, namaProdi = "", kode = ""):
        self.__nama_prodi = namaProdi
        self.__kode = kode

    # Setter and Getter
    def getNamaProdi(self):
        return self.__nama_prodi
    
    def setNamaProdi(self, namaProdi):
        self.__nama_prodi = namaProdi

    def getKode(self):
        return self.__kode
    
    def setKode(self, kode):
        self.__kode = kode

    # Function untuk menambahkan objek Course baru ke dalam list of Objects Course
    def addCourse(self, a:Course):
        
        listTemp = self.__courses.copy()
        listTemp.append(a)
        self.__courses = listTemp

    # Function yang mencetak isi list of Objects Courses dengan data-datanya
    def getCourses(self):
        for matkul in self.__courses:
            print ("- " + matkul.getNamaMatkul() + " (" + str(matkul.getJumlahSKS()) + " SKS)")
        print ("")