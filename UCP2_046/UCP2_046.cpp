// 1. Boolean (True/False), String (nama), Int (10), Float (4,5)
// 
// 2.   #include <iostream>
//      using namespace std;
//      int main() {
//          int bilangan;
//      srand(time(0));
//      bilangan = rand() % 10;
//      cout << "Nilai Awal: " << bilangan << endl;
//          if (bilangan <= 5)
//          {
//          bilangan = 2 * bilangan;
//          }
//		    cout << "Nilai Akhir : " << bilangan;
//		    }
// 
// 3.	#include <iostream>
//		using namespace std;
//		struct Pegawai {
//		    string kode; 
//		    string nama;
//		    string alamat;
//		    int umur;
//		};
//		int main() {
//		Pegawai mhs;
//		cout << "Kode pegawai : ";
//		cin >> mhs.kode;
//		cout << "Nama Pegawai : ";
//		cin >> mhs.nama;
//		cout << "Alamat Pegawai :";
//		cin >> mhs.alamat;
//		cout << "Umur Pegawai :";
//		cin >> mhs.umur;
//		cout << endl;
//		cout << "\n Kode : " << mhs.kode;
//		cout << "\n Nama : " << mhs.nama;
//		cout << "\n Alamat : " << mhs.alamat;
//		cout << "\n Umur : " << mhs.umur;
//		}
// 
// 4.	a. Prosedur
//		#include <iostream>
//      using namespace std;
//		void sapa(){
//			cout<<"Hallo";
//		}
//		int main(){
//			sapa();
//			return 0;
//		}
//		b. Fungsi
//		#include <iostream>
//      using namespace std;
//		int tambah(int a, int b){
//			return a+b;
//		}
//		int main(){
//			int hasil = tambah(5,3);
//			cout<<"hasil="<<hasil<<endl;
//			return 0;
//		}
// 
// 5.	a. FOR 
//		#include <iostream>
//      using namespace std;
//		    for (a=1; a<=10; a++)
//		    {
//		    cout<<a<<endl;
//		    }
//		b. WHILE
//		#include <iostream>
//      using namespace std;
//		int a=1
//		    while(a<=10)
//		    {
//		    cout<<a<<endl;
//		    a++
//		    }
//		c. DO WHILE 
//      #include <iostream>
//      using namespace std;
//		    int a= 11
//		    do
//		    {
//		    cout<<a<<endl;
//		    a++
//		    }while (a<=10)
//		    cout<<"x="<<endl;
// 
// 6.   
#include <iostream>
using namespace std; 

int main() {
    const int jumlah_kandidat = 20;
    string nama[jumlah_kandidat];
    int nilai_matematika[jumlah_kandidat];
    int nilai_inggris[jumlah_kandidat];
    string status[jumlah_kandidat];

        // memasukkan data kandidat
        cout << "Masukkan data kandidat:" << endl;
        for (int i = 1; i < jumlah_kandidat; ++i) {
            cout << "Nama kandidat ke-" << i << ": ";
            cin >> nama[i];
            cout << "Nilai Matematika: ";
            cin >> nilai_matematika[i];
            cout << "Nilai Bahasa Inggris: ";
            cin >> nilai_inggris[i];

            // memeriksa status diterima/tidak
            if ((nilai_matematika[i] + nilai_inggris[i]) / 2 >= 70 || nilai_matematika[i] > 80) {
                status[i] = "Diterima";
            }
            else {
                status[i] = "Ditolak";
            }
        }

        // menampilkan hasil
        cout << "Nama\tStatus" << endl;
        for (int i = 0; i < jumlah_kandidat; ++i) {
            cout << nama[i] << "\t" << status[i] << endl;
        }
        return 0;

}