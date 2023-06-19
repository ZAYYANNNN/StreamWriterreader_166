#include <iostream>

int main()
{
	try {
		cout << "selemat belajar di prodi TI UMY" << endl;
		throw 0, 5; //melemparkan sebuag integer maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi 
		cout << "pengecualian ini akan di eksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka blok ini akan di eksekusi*/
		cout << "default pengecualian di eksekusi" << endl;
	}
	return 0;
}
