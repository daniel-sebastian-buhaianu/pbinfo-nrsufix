#include <fstream>
using namespace std;
ifstream fin("nrsufix.in");
ofstream fout("nrsufix.out");
bool sufix(int, int);
int main()
{
	int x, nr, y;
	fin >> x;
	nr = -1;
	while (fin >> y)
		if (sufix(x, y))
			nr = y;
	fin.close();
	if (nr < 0)
		fout << "nu exista";
	else
		fout << nr;
	fout.close();
	return 0;
}
bool sufix(int a, int b)
{
	// verifica daca a este sufix al lui b
	while (a && b)
	{
		if (a%10 != b%10) return 0;
		a /= 10;
		b /= 10;
	}
	if (a) return 0;
	return 1;
}
// scor 100
