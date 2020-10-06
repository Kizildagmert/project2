#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int permute[] = {1,2,3};

  sort (permute,permute+3);
	
  do {
    cout << permute[0] << ' ' << permute[1] << ' ' << permute[2] << '\n';
  } while ( next_permutation(permute,permute+3) );

  //cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
/*
	
	int x,y,i;
	int n=5;
	int array[5]= {12,11,54,20,30};
	int array1[5];
	int maxNum;
	int temp;
	
	for(int i = 0;i<5;i++){
		cout << array[i];
	}
	cout << endl;
	x = array[0];
	
	for(i=0;i<n-1;i++){
		for(int j=0;j < n-i-1;j++){
			if(array[j] < array[j+1] )
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
		
	}

	for(int i = 0;i < 5;i++){
		cout <<array[i];
	}

/*	
	for(int i=0;i< 2;i++){
		cout << array[i];
		
		//cout << x << y;
}*/
//cout << "array1" << array1[i];
/*for(int i=0;i< 3;i++)
cout <<"Yeni array"<< array1[i];*/
//cout << onlar[x];
//	num = num / 10;
//	cout << num;
	
	return 0;
}
