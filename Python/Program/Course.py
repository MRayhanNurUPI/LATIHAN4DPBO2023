class Course:
    # Kelas Course di sini memiliki hubungan Komposisi dengan Kelas Program Studi.
    # Hubungan Komposisi dengan Kelas Course digunakan karena Course atau Mata Kuliah merupakan part-of Program Studi.
    # Hal tersebut bermakna ketika Program Studi dihapus, maka Course juga akan terhapus.

    # ATRIBUT
    __nama_matakuliah = ""
    __jumlahSKS = 0

    # METHODS
    # Constructor
    def __init__(self, nama, jumlah):
        self.__nama_matakuliah = nama
        self.__jumlahSKS = jumlah

    # Setter and Getter
    def getNamaMatkul(self):
        return self.__nama_matakuliah

    def setNamaMatkul(self, matkul):
        self.__nama_matakuliah = matkul

    def getJumlahSKS(self):
        return self.__jumlahSKS
    
    def setJumlahSKS(self, jmlSKS):
        self.__jumlahSKS = jmlSKS
