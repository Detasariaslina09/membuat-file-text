#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
int main(){
	//steam untuk menulis file
	ofstream myfile;
	
	//membuka file
	//jika file tidak ditemukam maka file akan otomatis dibuat
	myfile.open("DDPPRAKTIKUM.txt", ios::app);
	
	cout<<"----------------"<<endl;
	cout<<"MENULIS FILE"<<endl;
	cout<<"----------------"<<endl;
	
	//fail() -> untuk memeriksa suatu kesalahan pada operasi file
	if(!myfile.fail()){
		//menulis kedalam file
		myfile<<"belajar ddp asix bangtttttt ;)"<<endl;
		myfile.close(); //menutup file
		cout<<"text berhasil ditulis kedalam file"<<endl;
	}
	else{
		cout<<"file tidak ditemukan"<<endl;
	}
	_getche();
	return EXIT_SUCCESS;
}
