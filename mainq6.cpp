#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int square(int num){
	
	 return num * num;

}

int main(int argc, char** argv) {
	int n,m,numbers;
	int array[n];
	int result[m];
	int number[n];
	cout << "Please enter array size: "<<endl;
	cin >> n;
	for(int i=0;i < n;i++){
		cout << "Please enter numbers:"<<endl;
		cin >> number[i];
	}

	for(int i=0;i<n;i++){
			cout << number[i]<<"\t";
		}
	for(int i=0;i< n;i++){
		result[i] = square(number[i]);
	}
	
	
	for(int i=0;i<n;i++){
		cout << result[i]<<"\t";	
	}
	
	//sonuc = square(3);
	
	//cout << square(3);
	
	
	return 0;
}
