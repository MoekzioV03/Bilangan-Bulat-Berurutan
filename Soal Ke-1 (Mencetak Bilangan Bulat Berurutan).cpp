#include <iostream>
using namespace std;

int main(){
	
	int bilangan;
	int i;
	
	cout << "Masukkan batas bilangan bulat : ";
	cin >> bilangan;
	
		if(bilangan == 42){
			
			cout << "ERROR";
			
		}else{
			
			for(i=1; i<=bilangan; i++){
					
				if (i % 10 == 0){
					
					continue;
				}
				
				cout << i << " ";
			}
			
		}
	 
	return 0;
}
