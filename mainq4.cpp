#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	// kullanýcý tarihi girecek güncel tarihi ve dogum tarihini 
	//daha sonra ikisi arasýnda çýkarma iþlemi yapýlacak gün ay yýl olarak gözükecek
	
	
	int nday,nmonth,nyear;
	int bday,bmonth,byear;
	int tday,tmonth,tyear;
	
	cout << "Please enter current date: ";
	cin >> nday >> nmonth>> nyear;
	
	cout << "Please enter birthday date: ";
	cin >> bday >> bmonth>> byear;
	
	
	
	if(bday > nday){
		nday = nday +30;
		nmonth= nmonth -1;
	}
	if(bmonth > nmonth){
		nmonth = nmonth + 12;
		nyear = nyear -1;
	}
	tday = nday - bday;
	tmonth = nmonth - bmonth;
	tyear = nyear - byear;
	
	cout << tday << " Day, " << tmonth << " months, " << tyear << " year"<< endl;
	
	
	int hours = (tday*24) + (tmonth*720) + (tyear * 8766);
	
	cout << "You have been living for " << hours << " hours.";
	
	
	
	
	return 0;
}
