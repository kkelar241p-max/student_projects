#include <iostream>

using namespace std;

int main(){
	int x;
	cout<<"Podaj x: ";
	cin>>x;
	if(x%21==0){
		cout<<"Liczba jest podzielna przez 21"<<endl;
	}else{
		cout<<"Nie jest podzielna przez 21"<<endl;
	}
	if(x%10==0 || x%30==0 || x%50==0 || x%70==0 || x%90==0){
		cout<<"Pierwsza cyfra jest nieparzysta"<<endl;
	}else{	
		cout<<"Pierwsza cyfra jest nieparzysta"<<endl;
	}
	return 0;
}
