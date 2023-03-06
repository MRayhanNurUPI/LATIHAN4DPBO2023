# Import Class yang digunakan
from SivitasAkademik import SivitasAkademik
from ProgramStudi import ProgramStudi

class Dosen(SivitasAkademik):

    # Kelas Dosen di sini berperan sebagai:
    # - Child dari Kelas SivitasAkademik
    # - GrandChild dari Kelas Human

    # ATRIBUT
    __NIP = ""
    __pend_terakhir = ""
    __keahlian = ""

    # METHODS
    # Constructor
    def __init__(self, nik="", nama="", jk='',  asal_univ="", email_edu = "", fakultas="", prodi = ProgramStudi(), nip = "", pend_terakhir = "", keahlian = ""):
        super(Dosen, self).__init__(nik, nama, jk, asal_univ, email_edu, fakultas, prodi)
        self.__NIP = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian

    # Setter and Getter
    def getNIP(self):
        return self.__NIP
    
    def setNIP(self, nip):
        self.__NIP = nip

    def getPendidikanTerakhir(self):
        return self.__pend_terakhir
    
    def setPendidikanTerakhir(self, pend=""):
        self.__pend_terakhir = pend

    def getKeahlian(self):
        return self.__keahlian
    
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
