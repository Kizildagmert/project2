#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i;
	int x[4] = {88,89,90,91};
	int y[4] = {11,12,13,14};
	int sonuc[9];
	
	for(int i=0;i<4;i++){
		sonuc[i] = x[i];
		//sonuc[i] = y[i];
		cout << sonuc[i];
	}
	
	for(int j=0;j<4;j++){
		sonuc[j] = y[j];
		cout << sonuc[j];
	}
	
	return 0;
}
