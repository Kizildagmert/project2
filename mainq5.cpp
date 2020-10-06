#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,number;
	int numbers[5] = {10,45,20,25,23};
	int total = 0;
	int average = 0;
	cout << "Array= ";
	for(int i=0;i<5;i++)
	{
		cout<<numbers[i]<<"\t";
	}
	cout << "\n";
	
	for(int i=0;i<5;i++){
		total = total + numbers[i];
	}
	cout << "Total = " << total<<endl;
	
	average = total / 5 ;
	cout << "Average = " << average<<endl;
	
	for(int i=0;i< 5;i++){
		if(numbers[i] < average){
			cout << numbers[i]<<"\t";
		}
		
	}
	
	
	
	return 0;
}
