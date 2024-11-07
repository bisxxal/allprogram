
#include <bits/stdc++.h>
using namespace std;

int main()
{

	fstream f1;
	fstream f2;
	string ch;

	f1.open("myFile.txt", ios::in);
	f2.open("file2.txt", ios::out);
	while (!f1.eof())
	{

		getline(f1, ch);

		f2 << ch << endl;
	}
	f1.close();
	f2.close();

	f2.open("file2.txt", ios::in);
	while (!f2.eof())
	{

		f2 >> ch;

		cout << ch << endl;
	}
	f2.close();
	return 0;
}
