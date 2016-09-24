#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

double problem1(double num){
	cout << "Enter number to be rounded off: ";
	cin >> num;
	cout << "Rounded value: " << round(num) << "\n" << endl;
}

void problem2(){
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int num;
	int min=1;
	int max=20;
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		num = min + (rand() % (max - min + 1));
		for(int j=0;j<10;j++){
			if(num==uniques[j])
				num = min + (rand() % (max - min +1));
			else
				uniques[i] = num;
		}	
	}
	cout << "Unique numbers: ";
	for(int i=0;i<10;i++)
		cout << uniques[i] << " ";
}

int call_by_value(){
	int n;
	int ftr=1;
	cout << "\n\nEnter a number: ";
	cin >> n;
	for(int i=1;i<n+1;i++){
		if(n==0)
			cout << "The factorial of " << n << " is 1" << endl;
		else
			ftr=ftr*i;
	}
	cout << "The factorial of " << n << " is "<< ftr <<endl;
}

main(){
	double num;
	problem1(num);
	problem2();
	int ftr;
	call_by_value();
}
