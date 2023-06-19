#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{    
	string baris;
	ofstream outfile;	//memebuka file dalam mode menulis
	
	outfile.open("contohfile.txt");	

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true)
		cout << "- ";
	//mendapatkan setiap karakter dalam satu baris
	getline(cin, baris);
	//Loop akan berhenti jika ada yang memasukan karakter q
	if (baris == "q") break;


	
	

	
}   
