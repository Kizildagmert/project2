#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int number,yuzler;
	cout << "Please enter number: ";
	cin >> number;
	yuzler = number / 100;
	cout <<number<<" is the "<< yuzler+1<<"th century";
	return 0;
}
