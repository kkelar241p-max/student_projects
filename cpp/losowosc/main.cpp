#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	bool odp=0;
	int liczba2;
	do{
		int liczba1 = rand()%10+1;
		cout<<"Podaj liczbę od 1 do 10: "<<endl;
		cin>>liczba2;
		if(liczba1 == liczba2){
			cout<<"Odgadłeś! Gratulacje"<<endl;
			odp=1;
		}else{
			cout<<"Nie odgadłeś :( "<<liczba1<<endl;
		}
	}while(!odp);
	return 0;
}
