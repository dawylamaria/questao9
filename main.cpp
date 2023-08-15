#include <iostream>

/* Q9 */
using namespace std;

int main(int argc, char** argv) {
	double grausFarenheit;
	double conversao;
	
	cout << "Digite a temperatura em graus farenheit:" <<endl;
	
	cin >> grausFarenheit;
	
	conversao = (grausFarenheit - 32) / 1.8;
	
	cout << "Conversao para graus celsius:" << conversao << endl;
	system("pause");
	return 0;
}
