# Import Class yang digunakan
from Human import Human
from ProgramStudi import ProgramStudi

class SivitasAkademik(Human):

    # Kelas SivitasAkademik di sini berperan sebagai:
    # - Child dari Kelas Human
    # - Parent dari Kelas Mahasiswa dan Dosen
    
    # Kelas SivitasAkademik beragregasi dengan Kelas Program Studi.
    # Hubungan Agregasi dibuat karena kelas Sivitas Akademik dan Program Studi masing-masing dapat berdiri sendiri.
    # Sebagai contoh, jika misalnya suatu objek SivitasAkademik dihapus, maka objek Program Studinya masih akan tetap ada.

    # Atribut
    __asal_universitas = ""
    __email_edu = ""
    __fakultas = ""
    __prodi = ProgramStudi()

    # Constructor
    def __init__(self, nik="", nama="", jk='',  asal_univ="", email_edu = "", fakultas="", prodi = ProgramStudi()):
        super(SivitasAkademik, self).__init__(nik, nama, jk)
        self.__asal_universitas = asal_univ
        self.__email_edu = email_edu
        self.__fakultas = fakultas
        self.__prodi = prodi

    # Setter and Getter
    def setAsalUniv(self, asal_univ):
        self.__asal_universitas = asal_univ

    def setEmailUniv(self, email_univ):
        self.__email_edu = email_univ

    def setFakultas(self, fakultas_univ):
        self.__fakultas = fakultas_univ

    def setProdi(self, prodi=ProgramStudi()):
        self.__prodi = prodi

    def getAsalUniv(self):
        return self.__asal_universitas
    
    def getEmailUniv(self):
        return self.__email_edu
    
    def getFakultas(self):
        return self.__fakultas
    
    def getProdi(self):
        return self.__prodi