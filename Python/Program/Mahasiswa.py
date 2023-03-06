# Import Class yang digunakan
from SivitasAkademik import SivitasAkademik
from ProgramStudi import ProgramStudi

class Mahasiswa(SivitasAkademik):
    # Kelas Mahasiswa di sini berperan sebagai:
    # - Child dari Kelas SivitasAkademik
    # - GrandChild dari Kelas Human
    
    # ATRIBUT
    __NIM = ""
    __semester = ""

    # METHODS
    # Constructor
    def __init__(self, nik="", nama="", jk='',  asal_univ="", email_edu = "", fakultas="", prodi = ProgramStudi(), nim = "", semester = ""):
        super(Mahasiswa, self).__init__(nik, nama, jk, asal_univ, email_edu, fakultas, prodi)
        self.__NIM = nim
        self.__semester = semester

    # Setter and Getter
    def getNIM(self):
        return self.__NIM
    
    def setNIM(self, nim):
        self.__NIM = nim

    def getSemester(self):
        return self.__semester
    
    def setSemester(self, sem):
        self.__semester = sem
