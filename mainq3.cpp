#include <iostream>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,number,sum=0;
	int i;
	cout << "Please enter size of array:"<<endl;;
	cin >> n;
	int array[n];
	int toplam[n];
	int max = 0;
	srand(time(NULL));
	for(int i=0;i<n;i++){
		array[i] = 1+rand() % 10;
	}
	
	cout << "arrays = ";
	for(int i=0;i<n;i++){
		cout << array[i] << "\t";
	}
	
	for(int i=0;i<n-1;i++){
		
		sum = array[i] + array[i+1]; // sayýlarý topluyor
		cout << "Sum" <<i << "= "<< sum<<"\t";
		if(sum>max){ // en büyük sum ý buluyor
			max = sum;
		}
			if(array[i] + array[i+1] == sum)
		{
			cout << array[i]<<array[i+1];
		}
		
	}
		cout <<"Largest product is: " << max;
	
	
		
		
		
		
		
	return 0; 
}
