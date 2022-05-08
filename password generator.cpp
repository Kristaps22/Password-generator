#include <iostream>	//izmantojâm literatûra
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; //izveidots masivs ar iespejamiem 
int string_length = sizeof(alphanum)-1;
int main()
{
    ofstream MyFile("paroles.txt",ios::app); // izveidoju file un pievienoju, lai neparaksta pari failam

	
	int n; 
	
    cout<<"Ievadi paroles garumu:"; 
    cin>>n;
    
   	string password = "";
   	cout << "Ievadi, kam genere paroli\n";
   	cin>> password;
  	MyFile<<password; //tiek ierakstits faila
  	MyFile<<"=";	 //tiek ierakstits faila
    srand(time(0));
    cout<<"Izveidota parole ir faila";
    for(int i = 0; i < n; i++)
    
  
	MyFile<<alphanum[rand() % string_length];"\n"; //tiek ierakstits faila

	MyFile<<endl;

	
   
	MyFile.close(); //aizveru failu ciet
    return 0;
    
}
