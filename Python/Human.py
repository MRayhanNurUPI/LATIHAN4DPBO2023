class Human:

    # Kelas Human di sini berperan sebagai:
    # - Parent Class dari Kelas Sivitas Akademik 
    # - Grandparent Class dari Kelas Mahasiswa dan Dosen

    # ATRIBUT

    __NIK = ""
    __nama = ""
    __jenis_kelamin = ''

    # METHODS
    # Constructor
    def __init__(self, NIK="", nama="", jk=''):
        self.__NIK = NIK
        self.__nama = nama
        self.__jenis_kelamin = jk

    # Setter and Getter
    def setNIK(self, NIK):
        self.__NIK = NIK
    
    def setNama(self, nama):
        self.__nama = nama

    def setJenisKelamin(self, jk):
        self.__jenis_kelamin = jk

    def getNIK(self):
        return self.__NIK
    
    def getNama(self):
        return self.__nama
    
    def getJenisKelamin(self):
        return self.__jenis_kelamin
    
    