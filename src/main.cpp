#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matkul.hpp"
#include "include/pilihan.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<matkul> recMatkul;
	vector<pilihan> recPilih;

	int menu_terpilih;
	matkul sem;
	matkul pil;
	string kodematkul;
	string pilih;

	while(1) {
		cout << "Selamat datang di Universitas Samudera Hindia" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" 						<< endl;
		cout << "  2. Tambah Dosen" 							<< endl;
		cout << "  3. Tambah Tenaga Kependidikan" 				<< endl;
		cout << "  4. Tampilkan Semua Mahasiswa" 				<< endl;
		cout << "  5. Tampilkan Semua Dosen" 					<< endl;
		cout << "  6. Tampilkan Semua Tenaga Kependidikan" 		<< endl;
		cout << "  7. Tampilkan Data Mata Kuliah" 						<< endl;
		cout << "  8. Pengambilan Mata Kuliah" 					<< endl;
		cout << "  9. Tampilkan Data Semua Mahasiswa" 			<< endl;
		cout << " 10. Tampilkan Data Semua Dosen" 				<< endl;
		cout << " 11. Tampilkan Data Semua Tenaga Kependidikan" << endl;
		cout << " 12. Exit"										<< endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				input1:
				system("cls");
				string id, nama, nrp, departemen, isi;
				int dd, mm, yy, tahunmasuk, semesterke;
				cout << "Tambah Mahasiswa" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NRP 				: ";
				cin >> nrp;
				cout << "Departemen 			: ";
				cin.ignore();
				getline (cin, departemen);
				cout << "Tahun Masuk 			: ";
				cin >> tahunmasuk;
				cout << "Semester 			: ";
				cin >> semesterke;

				mahasiswa datamhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke);
				recMhs.push_back(datamhs);

				cout << "Lanjutkan mengisi data? (y/n)" << endl;
				cin >> isi;
				if(isi == "y"){
					goto input1;
				}

			}
			break;
			
			case 2:
			{
				input2:
				system("cls");
				string id, nama, npp, departemen, pendidikan, isi;
				int dd, mm, yy;
				cout << "Tambah Dosen" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NPP 				: ";
				cin >> npp;
				cout << "Departemen 			: ";
				cin.ignore();
				getline (cin, departemen);
				cout << "Pendidikan 			: ";
				cin>> pendidikan;
				cout << endl;

				dosen datadsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(datadsn);

				cout << "Lanjutkan mengisi data? (y/n)" << endl;
				cin >> isi;
				if(isi == "y"){
					goto input2;
				}

			}
			break;

			case 3:
			{
				input3:
				system("cls");
				string id, nama, npp, unit, isi;
				int dd, mm, yy;
				cout << "Tambah Tenaga Kependidikan" << endl;
				cout << "ID 				: ";
				cin >> id;
				cout << "Nama Lengkap 			: ";
				cin.ignore();
				getline (cin, nama);
				cout << "Tanggal Lahir (dd mm yyyy) 	: ";
				cin >> dd >> mm >> yy;
				cout << "NPP 				: ";
				cin >> npp;
				cout << "Unit 				: ";
				cin.ignore();
				getline (cin, unit);
				cout << endl;

				tendik datatdk(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(datatdk);

				cout << "Lanjutkan mengisi data? (y/n)" << endl;
				cin >> isi;
				if(isi == "y"){
					goto input3;
				}

			}
			break;

			case 4:
			{
				system("cls");
				cout << "Mahasiswa Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recMhs.size())
				{
					n++;
					cout << n << ". " << recMhs[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 5:
			{
				system("cls");
				cout << "Dosen Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recDosen.size())
				{
					n++;
					cout << n << ". " << recDosen[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 6:
			{
				system("cls");
				cout << "Tenaga Kependidikan Universitas Samudera Hindia" << endl;
				int i=0;
				int n =0;
				while(i < recTendik.size())
				{
					n++;
					cout << n << ". " << recTendik[i].getNama() << endl;
					i++;
				}
			}
			cout << endl;
			break;

			case 7:
			{
				system("cls");
				cout << "Kurikulum Mata Kuliah Universitas Samudera Hindia" << endl;
				cout << "Semester 1 (paket)" << endl;
				sem.sem1(); cout << endl;
				cout << "Semester 2 (paket)" <<  endl;
				sem.sem2(); cout << endl;
				cout << "Semester 3" <<  endl;
				sem.sem3(); cout << endl;
				cout << "Semester 4" <<  endl;
				sem.sem4(); cout << endl;
				cout << "Semester 5" <<  endl;
				sem.sem5(); cout << endl;
				cout << "Semester 6" <<  endl;
				sem.sem6(); cout << endl;
				cout << "Semester 7" <<  endl;
				sem.sem7(); cout << endl;
				cout << "Semester 8" <<  endl;
				sem.sem8(); cout << endl;
				break;
			}

			case 8:
			{
				input4:
				system("cls");
				cout << "Pengambilan Mata Kuliah" << endl;
				cout << "Masukkan NRP : ";
				string innrp, isi;
				cin >> innrp;
				for (int i = 0; i < recMhs.size() ; i++)
				{
					if(innrp == recMhs[i].getNRP()){
						cout << "Halo " << recMhs[i].getNama();
						int sem = recMhs[i].getSemester();

						if (sem == 1||sem == 2){
							cout << " Anda tidak dapat mengambil mata kuliah karena semester 1 dan 2 menggunakan sistem paket" << endl;
						}

						else if(sem = 3){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
							if(kodematkul == "001"){
								pil.matkul1(); cout << endl;
								pilih = "Aljabar Linier dan Matematika Diskrit";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
						
							}

							else if(kodematkul == "002"){
								pil.matkul2(); cout << endl;
								pilih = "Metode Numerik";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}

							else if(kodematkul == "003"){
								pil.matkul3(); cout << endl;
								pilih = "Rangkaian Elektronika";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}

							else if(kodematkul == "004"){
								pil.matkul4(); cout << endl;
								pilih = "Sistem Operasi";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "005"){
								pil.matkul5(); cout << endl;
								pilih = "Sistem Telekomunikasi";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "006"){
								pil.matkul6(); cout << endl;
								pilih = "Struktur Data dan Analisis Algoritma";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}

							else{
								cout << "Mata kuliah yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}
							
						}

						else if(sem == 4){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
								
							if(kodematkul == "007"){
								pil.matkul7(); cout << endl;
								pilih = "Desain dan Rekayasa Sistem";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "008"){
								pil.matkul8(); cout << endl;
								pilih = "Pengolahan Sinyal Digital";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "009"){
								pil.matkul9(); cout << endl;
								pilih = "Persamaan Differensial dadn Deret untuk Teknik";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "010"){
								pil.matkul10(); cout << endl;
								pilih = "Probabilitas dan Statistik";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "011"){
								pil.matkul11(); cout << endl;
								pilih = "Rangkaian Digital dan Lab";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "012"){
								pil.matkul12(); cout << endl;
								pilih = "Sistem Manajemen Basis Data";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}

							else{
								cout << "Matkul yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}

						}

						else if(sem ==5){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
									
							if(kodematkul == "013"){
								pil.matkul13(); cout << endl;
								pilih = "Jaringan Komputer dan Lab";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "014"){
								pil.matkul14(); cout << endl;
								pilih = "Arsitektur dan Organisasi Sistem Komputer";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "015"){
								pil.matkul15(); cout << endl;
								pilih = "Pembelajaran Mesin";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "016"){
								pil.matkul16(); cout << endl;
								pilih = "Pengolahan Citra dan Video";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "017"){
								pil.matkul17(); cout << endl;
								pilih = "Sistem Mikroprosessor dan Mikrokontroler";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}

							else{
								cout << "Matkul yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}
							
						}

						else if(sem == 6){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
								
							if(kodematkul == "018"){
								pil.matkul18(); cout << endl;
								pilih = "Kerja Praktik";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "019"){
								pil.matkul19(); cout << endl;
								pilih = "Pemrograman Sistem dan Jaringan";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "020"){
								pil.matkul20(); cout << endl;
								pilih = "Sistem Tertanam dan Lab";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "021"){
								pil.matkul21(); cout << endl;
								pilih = "Visi Komputer";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "022"){
								pil.matkul22(); cout << endl;
								pilih = "Technopreneur";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
							else{
								cout << "Matkul yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}
							
						}

						else if(sem == 7){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
	
							if(kodematkul == "023"){
								pil.matkul23(); cout << endl;
								pilih = "Pra Tugas Akhir";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "024"){
								pil.matkul24(); cout << endl;
								pilih = "Proyek Telematika";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "025"){
								pil.matkul25(); cout << endl;
								pilih = "Jaringan Sensor Nirkabel dan Internet of Things";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "026"){
								pil.matkul26(); cout << endl;
								pilih = "Sekuriti Sistem Komputer";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
							else{
								cout << "Matkul yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}
							
						}

						else  if(sem == 8){
							cout << " Silahkan Masukkan Kode Mata Kuliah yang Dipilih : ";
							cin >> kodematkul;
							
							if(kodematkul == "027"){
								pil.matkul27(); cout << endl;
								pilih = "Tugas Akhir";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "028"){
								pil.matkul28(); cout << endl;
								pilih = "Kompetensi Teknologi Elektro";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
									
							else if(kodematkul == "029"){
								pil.matkul29(); cout << endl;
								pilih = "Wawasan dan Aplikasi Teknologi";
								pilihan datapilih(pilih);
								recPilih.push_back(datapilih);
								 
							}
							else{
								cout << "Matkul yang anda pilih tidak tersedia di semester anda" << endl;
							}
							cout << "Lanjutkan mengisi data? (y/n)" << endl;
							cin >> isi;
							if(isi == "y"){
								goto input4;
							}

						}

					}
				}
				break;
			}

			case 9:
			{
				system("cls");
				cout << "Data Semua Mahasiswa Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recMhs.size())
				{
					cout << "ID 			: " 			<< recMhs[i].getId() << endl;
					cout << "Nama 			: " 			<< recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " 		<< recMhs[i].getTglLahir() << " " << recMhs[i].getBulanLahir() << " " << recMhs[i].getTahunLahir() << endl;
					cout << "NRP 			: " 			<< recMhs[i].getNRP() << endl;
					cout << "Departemen 		: " 		<< recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk 		: "			<< recMhs[i].getTahunmasuk() << endl;
					cout << "Semester 		: " 			<< recMhs[i].getSemester() << endl;
					cout << "Mata Kuliah 		:" 			<< endl;
					int n = recMhs[i].getSemester();
					if(n == 1){
						sem.sem1(); cout << endl;
					}
					else if(n == 2){
						sem.sem2(); cout  << endl;
					}
					else if(n!=1&&n!=2){
							cout << recPilih[i].getPilih() << endl;		
					}

					
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case 10:
			{
				system("cls");
				cout << "Data Semua Dosen Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recDosen.size())
				{
					cout << "ID 			: " << recDosen[i].getId() << endl;
					cout << "Nama 			: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recDosen[i].getTglLahir() << " " << recDosen[i].getBulanLahir() << " " << recDosen[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recDosen[i].getNPP() << endl;
					cout << "Departemen 		: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan		: " << recDosen[i].getPendidikan() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case 11:
			{
				system("cls");
				cout << "Data Semua Tenaga Kependidikan Universitas Samudera Hindia" << endl;
				int i=0;
				while(i < recTendik.size())
				{
					cout << "ID 			: " << recTendik[i].getId() << endl;
					cout << "Nama 			: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recTendik[i].getTglLahir() << " " << recTendik[i].getBulanLahir() << " " << recTendik[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recTendik[i].getNPP() << endl;
					cout << "Unit 			: " << recTendik[i].getUnit() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}
			

			case (12):
			{
				exit(1);
			}
		}
	}

	return 0;
}
