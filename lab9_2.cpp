#include<iostream>
using namespace std;



int printO(int rows, int cols){
	if (rows <= 0 || cols <= 0) {
		cout << "Invalid input\n";
		return 0;
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "O";
		}
		cout << "\n";
	}
	return 0;
}

//Write the function printO() here

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
