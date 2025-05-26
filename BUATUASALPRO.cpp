#include <iostream>
#include <map>      
#include <string>   
#include <iomanip>  
#include <cstdlib>  
#include <limits> 
#include <conio.h>
using namespace std;

struct Mhs{
	long long nim;
	string nama;
	string alamat;
	string jurusan;
	string mk1, mk2, mk3, mk4;
	float nilaimk1, nilaimk2, nilaimk3, nilaimk4;
	float ipk;
	string status;	
};

struct node{
	Mhs mhs;
	node *next;
};

Mhs mhs;

class linkedlist{
private:
	node *head;
public:
	linkedlist() : head(NULL) {}
	
	void addnode(Mhs mhs){
		
		node *newnode = new node;
		newnode -> mhs = mhs;
		newnode -> next = NULL;
		if(head == NULL){
			head = newnode;	
		}else{
			node *temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}
			temp -> next = newnode; 
		}
	}
	
	void addmahasiswa(){ //1.tambah mahasiswa
		
		cout << "nama: ";
		cin.ignore();
		getline(cin, mhs.nama);
		
		cout << "nim: ";
		cin >> mhs.nim;
		
		cout << "alamat: ";
		cin.ignore();
		getline(cin, mhs.alamat);
		
		cout << "jurusan: ";
		getline(cin, mhs.jurusan);
		
		cout << "Nilai MK" << endl;
		cout << "A = 4" << endl;
		cout << "A- = 3.75" << endl;
		cout << "B+ = 3.5" << endl;
		cout << "B = 3" << endl;
		cout << "B- = 2.75" << endl;
		cout << "C+ = 2.5" << endl;
		cout << "C = 2" << endl;
		cout << "D = 1" << endl;
		cout << "E = 0" << endl;
		nilaimk(mhs);
	    
	    mhs.ipk = ((mhs.nilaimk1 * 3) + (mhs.nilaimk2 * 3) + 
		(mhs.nilaimk3 * 3) + (mhs.nilaimk4 * 3)) / 12; 
	    if (mhs.ipk > 3.5)
	    {
	        mhs.status = "Cumlaude";
	    }
	    else
	    {
	        mhs.status = "Memuaskan";
	    }
	    addnode(mhs);
	}
	
	void nilaimk(Mhs &mhs){ //converter nilai
		for(int a = 1; a <= 4; a++){
			cout << "masukan nilai mk " << a << ", SKS = 3 (dengan huruf cont: A sampai E): ";
			if(a == 1){
				cin >> mhs.mk1;
				if(mhs.mk1 == "A"){
			        mhs.nilaimk1 = 4;
			    }else if(mhs.mk1 == "A-"){
			        mhs.nilaimk1 = 3.75;
			    }else if(mhs.mk1 == "B+"){
			        mhs.nilaimk1 = 3.5;
			    }else if(mhs.mk1 == "B"){
			        mhs.nilaimk1 = 3;
			    }else if(mhs.mk1 == "B-"){
			        mhs.nilaimk1 = 2.75;
			    }else if(mhs.mk1 == "C+"){
			        mhs.nilaimk1 = 2.5;
			    }else if(mhs.mk1 == "C"){
			        mhs.nilaimk1 = 2;
			    }else if(mhs.mk1 == "D"){
			        mhs.nilaimk1 = 1;
			    }else if(mhs.mk1 == "E"){
			        mhs.nilaimk1 = 0;
			    }
			}else if(a == 2){
				cin >> mhs.mk2;
				if(mhs.mk2 == "A"){
			        mhs.nilaimk2 = 4;
			    }else if(mhs.mk2 == "A-"){
			        mhs.nilaimk2 = 3.75;
			    }else if(mhs.mk2 == "B+"){
			        mhs.nilaimk2 = 3.5;
			    }else if(mhs.mk2 == "B"){
			        mhs.nilaimk2 = 3;
			    }else if(mhs.mk2 == "B-"){
			        mhs.nilaimk2 = 2.75;
			    }else if(mhs.mk2 == "C+"){
			        mhs.nilaimk2 = 2.5;
			    }else if(mhs.mk2 == "C"){
			        mhs.nilaimk2 = 2;
			    }else if(mhs.mk2 == "D"){
			        mhs.nilaimk2 = 1;
			    }else if(mhs.mk2 == "E"){
			        mhs.nilaimk2 = 0;
			    }
			}else if(a == 3){
				cin >> mhs.mk3;
				if(mhs.mk3 == "A"){
			        mhs.nilaimk3 = 4;
			    }else if(mhs.mk3 == "A-"){
			        mhs.nilaimk3 = 3.75;
			    }else if(mhs.mk3 == "B+"){
			        mhs.nilaimk3 = 3.5;
			    }else if(mhs.mk3 == "B"){
			        mhs.nilaimk3 = 3;
			    }else if(mhs.mk3 == "B-"){
			        mhs.nilaimk3 = 2.75;
			    }else if(mhs.mk3 == "C+"){
			        mhs.nilaimk3 = 2.5;
			    }else if(mhs.mk3 == "C"){
			        mhs.nilaimk3 = 2;
			    }else if(mhs.mk3 == "D"){
			        mhs.nilaimk3 = 1;
			    }else if(mhs.mk3 == "E"){
			        mhs.nilaimk3 = 0;
			    }
			}else if(a == 4){
				cin >> mhs.mk4;
				if(mhs.mk4 == "A"){
			        mhs.nilaimk4 = 4;
			    }else if(mhs.mk4 == "A-"){
			        mhs.nilaimk4 = 3.75;
			    }else if(mhs.mk4 == "B+"){
			        mhs.nilaimk4 = 3.5;
			    }else if(mhs.mk4 == "B"){
			        mhs.nilaimk4 = 3;
			    }else if(mhs.mk4 == "B-"){
			        mhs.nilaimk4 = 2.75;
			    }else if(mhs.mk4 == "C+"){
			        mhs.nilaimk4 = 2.5;
			    }else if(mhs.mk4 == "C"){
			        mhs.nilaimk4 = 2;
			    }else if(mhs.mk4 == "D"){
			        mhs.nilaimk4 = 1;
			    }else if(mhs.mk4 == "E"){
			        mhs.nilaimk4 = 0;
			    }
			}
		}
	}
	
	
	void deletemhs(){ //2.hapus mahasiswa, berdasarkan input jurusan
		string jurusan;
		cout << "masukan jurusan anda: ";
		cin >> jurusan;
		node *temp = head;
		node *prev = NULL;
		bool deleted = false;
		
		while(temp != NULL){
			if(temp -> mhs.jurusan == jurusan){
				if(temp == head){
					head = temp -> next;
					delete temp;
					temp = head;
				}else{
					prev -> next = temp -> next;
					delete temp;
					temp = prev -> next;
				}
				deleted = true;
			}
			else{
				prev = temp;
				temp = temp -> next;
			}
		}
		if(deleted){
			cout << "data berhasil dihapus" << endl;
		}else{
			cout << "data tidak ditemukan" << endl;
		}
	}
	
	void updatenode(){ //3.update data jika statusnya cumlaude atau ipk > 3.5 dengan input nim
        long long nim;
        cout << "masukan nim yang ingin di update: ";
        cin >> nim;
		node *temp = head;
		bool ketemu = false;
		
		while(temp != NULL){
			if(temp -> mhs.nim == nim){
				ketemu = true;
				if(temp -> mhs.ipk < 3.00){
					cout << "ipk anda kurang untuk mengupdate";
					return;
				}else{
					cout << "update data mahasiswa" << endl;
					nilaimk(temp -> mhs);
					temp -> mhs.ipk = mhs.ipk = ((temp -> mhs.nilaimk1 * 3) + 
					(temp -> mhs.nilaimk2 * 3) + (temp -> mhs.nilaimk3 * 3) + 
					(temp -> mhs.nilaimk4 * 3)) / 12; 
				    if (temp -> mhs.ipk > 3.5)
				    {
				        temp -> mhs.status = "Cumlaude";
				    }
				    else
				    {
				        temp -> mhs.status = "Memuaskan";
				    }
				}
			}
			temp = temp -> next;
		}	
		if(!ketemu){
			cout << "mahasiswa dengan nim: " << nim << " tidak ada" << endl;
		}
	}
	
	void displayipk(){ //4.cek ipk input jurusan
		string jurusan;
		cout << "masukan jurusan anda: ";
		cin >> jurusan;
        node *temp = head; 
        bool ketemu = false;
        while (temp != NULL){
			if(temp -> mhs.jurusan == jurusan){
				ketemu = true; 
				cout << endl;
	        	cout << "nama: " << temp -> mhs.nama << endl;
	    		cout << "nim: " << temp -> mhs.nim << endl;
	    		cout << "alamat: " << temp -> mhs.alamat << endl;
				cout << "jurusan: " << temp -> mhs.jurusan << endl;
		    	cout << "IPK: " << temp -> mhs.ipk << endl;
		    	cout << "status: " << temp -> mhs.status << endl << endl;       	
        	}
        	temp = temp->next;
    	}
    	if(!ketemu){
    		cout << "jurusan tidak ditemukan";
		}
    }
    
    void sortipk(){ //5.urutkan ipk dari kecil ke besar
    	node *temp;
		bool swapped;
    	if(head == NULL){
    		cout << "data kosong" << endl;
    		return;
		}
		do{
			swapped = false;
			temp = head;
			while(temp -> next != NULL){
				if(temp -> mhs.ipk > temp -> next -> mhs.ipk){
					swap(temp -> mhs, temp -> next -> mhs);
					swapped = true;
				}
				temp = temp -> next;
			}
		}while(swapped);
		cout << "mahasiswa di urutkan dengan ipk terkecil ke terbesar" << endl;
		
		temp = head;
		while(temp != NULL){
			cout << endl;
			cout << endl;
	       	cout << "nama: " << temp -> mhs.nama << endl;
	    	cout << "nim: " << temp -> mhs.nim << endl;
	    	cout << "alamat: " << temp -> mhs.alamat << endl;
			cout << "jurusan: " << temp -> mhs.jurusan << endl;
		   	cout << "IPK: " << temp -> mhs.ipk << endl;
		   	cout << "status: " << temp -> mhs.status << endl;
		   	temp = temp -> next;
		}
	}
	
	void lowhigh(){ // 6.menu menampilkan ipk tertinggi dan terendah
		if(head == NULL){
			cout << "data tidak ada";
			return;
		}
		
		node *mhs = head;
		float high  = mhs -> mhs.ipk;
		float low  = mhs -> mhs.ipk;
		node *mahasiswahigh = mhs;
		node *mahasiswalow = mhs;
		
		while(mhs != NULL){
			if(mhs -> mhs.ipk > high){
				high = mhs -> mhs.ipk;
				mahasiswahigh = mhs;
			}
			if(mhs -> mhs.ipk < low){
				low = mhs -> mhs.ipk;
				mahasiswalow = mhs;
			}
			mhs = mhs -> next;
		}
		cout << "data mahasiswa dengan ipk tertinggi dengan ipk " << mahasiswahigh -> mhs.ipk << endl;
		cout << "nama: " << mahasiswahigh -> mhs.nama << endl;
	    cout << "nim: " << mahasiswahigh -> mhs.nim << endl;
	    cout << "alamat: " << mahasiswahigh -> mhs.alamat << endl;
	    cout << "jurusan: " << mahasiswahigh -> mhs.jurusan << endl;
		cout << "IPK: " << mahasiswahigh -> mhs.ipk << endl;
		cout << "status: " << mahasiswahigh -> mhs.status << endl << endl;
		
		cout << "data mahasiswa dengan ipk terendah dengan ipk " << mahasiswalow -> mhs.ipk << endl;
		cout << "nama: " << mahasiswalow -> mhs.nama << endl;
	    cout << "nim: " << mahasiswalow -> mhs.nim << endl;
	    cout << "alamat: " << mahasiswalow -> mhs.alamat << endl;
	    cout << "jurusan: " << mahasiswalow -> mhs.jurusan << endl;
		cout << "IPK: " << mahasiswalow -> mhs.ipk << endl;
		cout << "status: " << mahasiswalow -> mhs.status << endl << endl;
	}
	
	void searchnim(){ //7.cari mahasiswa berdasarkan nim
		long long nim1;
       	cout << "masukan nim yang ingin dicari: ";
        cin >> nim1;
        bool ketemu = false;
		node *temp = head;
		while(temp != NULL){
			if(temp -> mhs.nim == nim1){
				ketemu = true;
				cout << endl;
	        	cout << "nama: " << temp -> mhs.nama << endl;
	    		cout << "nim: " << temp -> mhs.nim << endl;
	    		cout << "alamat: " << temp -> mhs.alamat << endl;
	    		cout << "jurusan: " << temp -> mhs.jurusan << endl;
		    	cout << "IPK: " << temp -> mhs.ipk << endl;
		    	cout << "status: " << temp -> mhs.status << endl;
		    	cout << "data dengan nim " << nim1 << " ditemukan";
			}
		    temp = temp -> next;
		}if(!ketemu){
			cout << "nim tidak ditemukan";
		}
	}
	
	void deleted(){ //8.delete berdasarkan angka
		node *temp = head;
		node *prev = NULL;
		int angka;
		int tampil = 1;
		
		while (temp != NULL){
			cout << endl;
			cout << tampil;
	        cout << ".nama: " << temp -> mhs.nama << endl;
	    	cout << "nim: " << temp -> mhs.nim << endl;
	    	cout << "alamat: " << temp -> mhs.alamat << endl;
	    	cout << "jurusan: " << temp -> mhs.jurusan << endl;
		    cout << "IPK: " << temp -> mhs.ipk << endl;
		    cout << "status: " << temp -> mhs.status << endl << endl;
            temp = temp->next;
            tampil++;
    	}
    	
    	temp = head;
    	
		cout << "masukan angka yang ingin dihapus: ";
		cin >> angka;
		bool ketemu = false;
		int pos = 1;
		while(temp != NULL){
			if(pos == angka){
				ketemu = true;
				if(prev == NULL){
					head = temp -> next;
				}	
				else{
					prev -> next = temp -> next;
				}
				delete temp;
				cout << "data pada nomor " << angka << " berhasil dihapus" << endl;
				getch();
				return;
			}		
			prev = temp;
			temp = temp -> next;
			pos++;	 
		}		
		if(!ketemu){
			cout << "data dengan nomor " << angka << " tidak ditemukan";
		}
	}
	
	void searchdinamis(){ //9.cari mahasiswa dinamis
		long long nim1;
		string alamat1;
		string jurusan1;
		int cara;
		cout << "pilih cara untuk mencari data mahasiswa" << endl;
		cout << "1. dengan NIM" << endl;
       	cout << "2. dengan alamat" << endl;
       	cout << "3. jurusan" << endl;
       	cout << "pilih: ";
       	cin >> cara;
       	if(cara == 1){
			cout << "masukan nim yang ingin dicari: ";
	        cin >> nim1;
	        bool ketemu = false;
			node *temp = head;
			while(temp != NULL){
				if(temp -> mhs.nim == nim1){
					ketemu = true;
					cout << endl;
		        	cout << "nama: " << temp -> mhs.nama << endl;
		    		cout << "nim: " << temp -> mhs.nim << endl;
		    		cout << "alamat: " << temp -> mhs.alamat << endl;
		    		cout << "jurusan: " << temp -> mhs.jurusan << endl;
			    	cout << "IPK: " << temp -> mhs.ipk << endl;
			    	cout << "status: " << temp -> mhs.status << endl << endl;
			    	cout << "data dengan nim " << nim1 << " ditemukan";
				}
			    temp = temp -> next;
			}if(!ketemu){
				cout << "nim tidak ditemukan";
			}
		}
		else if(cara == 2){
			cout << "masukan alamat yang ingin dicari: ";
			cin.ignore();
	        getline(cin, alamat1);
	        bool ketemu = false;
			node *temp = head;
			while(temp != NULL){
				if(temp -> mhs.alamat == alamat1){
					ketemu = true;
					cout << endl;
		        	cout << "nama: " << temp -> mhs.nama << endl;
		    		cout << "nim: " << temp -> mhs.nim << endl;
		    		cout << "alamat: " << temp -> mhs.alamat << endl;
		    		cout << "jurusan: " << temp -> mhs.jurusan << endl;
			    	cout << "IPK: " << temp -> mhs.ipk << endl;
			    	cout << "status: " << temp -> mhs.status << endl << endl;
			    	cout << "data dengan alamat " << alamat1 << " ditemukan";
				}
			    temp = temp -> next;
			}if(!ketemu){
				cout << "alamat tidak ditemukan";
			}
		}
		else if(cara == 3){
			cout << "masukan jurusan yang ingin dicari: ";
	        cin >> jurusan1;
	        bool ketemu = false;
			node *temp = head;
			while(temp != NULL){
				if(temp -> mhs.jurusan == jurusan1){
					ketemu = true;
					cout << endl;
		        	cout << "nama: " << temp -> mhs.nama << endl;
		    		cout << "nim: " << temp -> mhs.nim << endl;
		    		cout << "alamat: " << temp -> mhs.alamat << endl;
		    		cout << "jurusan: " << temp -> mhs.jurusan << endl;
			    	cout << "IPK: " << temp -> mhs.ipk << endl;
			    	cout << "status: " << temp -> mhs.status << endl << endl;
			    	cout << "data dengan jurusan " << jurusan1 << " ditemukan";
				}
			    temp = temp -> next;
			}if(!ketemu){
				cout << "jurusan tidak ditemukan";
			}
		}
		else{
			cout << "menu tidak ada";
		}
	}
	
	void jumlahjurusan(){ // 10. untuk menghitung banyaknya mahasiswa di suatu jurusan
		string jurusan1;
		cout << "masukan jurusan yang ingin dihitung: ";
	    cin >> jurusan1;
	    bool ketemu = false;
	    int count = 0;
		node *temp = head;
		while(temp != NULL){
			if(temp -> mhs.jurusan == jurusan1){
				ketemu = true;
				count++;
			}
		    temp = temp -> next;
		}if(!ketemu){
			cout << "data mahasiswa dengan jurusan " << jurusan1 << " adalah: " << count;
		}else{
			cout << "jumlah mahasiswa dengan jurusan " << jurusan1 << " adalah: " << count;
		}	
	}
};

/* 
1.tambah mahasiswa
2.hapus mahasiswa, berdasarkan input jurusan
3.update data jika statusnya cumlaude atau ipk > 3.5, dengan input nim
4.cek ipk, dengan input jurusan
5.urutkan ipk dari kecil ke besar
6.ipk paling besar dan kecil
7.cari mahasiswa berdasarkan nim
8.delete berdasarkan angka
9.Menu mencari mahasiswa dinamis (berdasarkan nim, alamat, jurusan)
10.Menghitung banyaknya mahasiswa dengan input jurusan
11.exit
*/


int main(){
	linkedlist dataMhs;
	int menu;
    do{
    	system("cls");	
        cout << "1. Input Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Cek IPK" << endl;                                             
        cout << "5. Tampilkan Daftar Mahasiswa di urutkan ipk terkecil ke terbesar" << endl;
        cout << "6. Tampilkan Daftar Mahasiswa Yang Paling Tinggi dan Paling Rendah" << endl;
        cout << "7. Cari Mahasiswa Berdasarkan NIM" << endl;
        cout << "8. delete berdasarkan angka" << endl;
        cout << "9. Menu mencari mahasiswa dinamis (berdasarkan nim, alamat, jurusan)" << endl;
        cout << "10. Menghitung banyaknya mahasiswa dengan input jurusan" << endl;
        cout << "11. Exit" << endl;
        cout << "pilih menu: ";
        cin >> menu;
        cout << endl;
        if (menu == 1){
			dataMhs.addmahasiswa();
			getch();
			system("cls");
        }
        else if (menu == 2){
            dataMhs.deletemhs();
            getch();
			system("cls");
        }
        else if (menu == 3){
            dataMhs.updatenode();
            getch();
			system("cls");
        }
        else if (menu == 4){
            dataMhs.displayipk();   
        	getch();
			system("cls");
        }
        else if (menu == 5){
        	dataMhs.sortipk();
        	getch();
			system("cls");
        }
        else if (menu == 6){
        	dataMhs.lowhigh();
            getch();
			system("cls");
        }
        else if (menu == 7){
        	dataMhs.searchnim();
			getch();
			system("cls");
        }
        else if (menu == 8){
            dataMhs.deleted();
            getch();
            system("cls");
        }
        else if(menu == 9){
        	dataMhs.searchdinamis();
        	getch();
			system("cls");
		}
		else if(menu == 10){
			dataMhs.jumlahjurusan();
			getch();
			system("cls");
		}
		else if(menu == 11){
			return 0;        
		}
		else{
			cout << "menu tidak ada";
			getch();
		}
    }while(menu != 11); /* 11 karena total pilihan ada 11
	`````	*/
    cout << endl;
	
	return 0;
}
