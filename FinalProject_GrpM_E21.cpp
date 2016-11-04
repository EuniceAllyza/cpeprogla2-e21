#include<iostream>
#include<iomanip>
using namespace std;
struct CustomerInfo{
	char name;
	int cn;
	struct{
		int ch[];
		int k[];
	}bag;
};
int main()
{
	int n,i;
	CustomerInfo ci;
	cout << "Welcome to Hawk Online Store!\n" << endl << "We offer the following products:" << endl;
	cout << "[1] Athletic Bag\n";
	cout << "[2] Backpack\n";
	cout << "[3] Duffel Bag\n";
	cout << "[4] Hiking/Camping Bag\n";
	cout << "[5] Messenger Bag\n";
	cout << "[6] Shoulder Bag\n";
	cout << "[7] Trolley Bag\n";
	cout << "\n..................................................................\n" << endl;
	cout << "How many kinds of bag would you like to buy? ";
	cin >> n;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	if(n>=1){
		for(i=0;i<n;i++){
			cout << "--> Bag " << i+1 << ": Enter the kind of bag you want[1-7]: ";
			cin >> ci.bag.ch[i];
			cout << "   --> How many of this kind would you like to buy? ";
			cin >> ci.bag.k[i];
			cout << "\n      - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n";
			}
			cout << setw(11) << "Bag #"
				 << setw(25) << "Kind of Bag"
				 << setw(20) << "Quantity"
				 << setw(20) << "Price" << endl;
		for(i=0;i<n;i++){
		cout << setw(10) << "Bag " << i+1;
			switch(ci.bag.ch[i]){
				case 1: cout << setw(25) << "Athletic Bag"; break;
				case 2: cout << setw(25) << "Backpack"; break;
				case 3: cout << setw(25) << "Duffel Bag"; break;
				case 4: cout << setw(25) << "Hiking/Camping Bag"; break;
				case 5: cout << setw(25) << "Messenger Bag"; break;
				case 6: cout << setw(25) << "Shoulder Bag"; break;
				case 7: cout << setw(25) << "Trolley Bag";
				}
		/*if(ci.bag.ch[i]==1)
			cout << setw(25) << "Athletic Bag";
		if(ci.bag.ch[i]==2)
			cout << setw(25) << "Backpack";
		if(ci.bag.ch[i]==3)
			cout << setw(25) << "Duffel Bag";
		if(ci.bag.ch[i]==4)
			cout << setw(25) << "Hiking/Camping Bag";
		if(ci.bag.ch[i]==5)
			cout << setw(25) << "Messenger Bag";
		if(ci.bag.ch[i]==6)
			cout << setw(25) << "Shoulder Bag";
		if(ci.bag.ch[i]==7)
			cout << setw(25) << "Trolley Bag";*/
		cout << setw(20) << ci.bag.k[i];
		cout << endl;
			}
		}
	else{
		cout << "\nInvalid input!";
	}
}
