#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	char string1[20];
	int i=0;
	bool x = true;
	cout << "Enter a string: ";
	cin >> string1;
	int length = strlen(string1)-1;
	//cout << j<<endl;
	
	for(i = 0;i<length;i++){
		if(string1[i] != string1[length]){
		x =  false;
		}
		
		length--;
	}
	if(x){
		cout << "YES. That word is palindrome. "<<endl;
	}
	else{
		cout << "NO. It is not palindrome"<< endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	/*while(string1[i]) // another solution calculate lengths
	i++;
	cout <<i<<endl;*/
	

	return 0;
}
