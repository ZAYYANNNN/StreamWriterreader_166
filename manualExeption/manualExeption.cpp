#include <iostream>

int main()
{
	try {
		cout << "selemat belajar di prodi TI UMY" << endl;
		throw 0, 5; //melemparkan sebuag integer maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
}