#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int n, i, j;
	while (f >> i >> j){
	 	int tempi = i;
        int tempj = j;
        if(i>j)
        swap(i,j);
            
        int maxCycle_Length = INT_MIN;
        int cycle_Length;
        while(i<=j)
        {
            n=i;
            cycle_Length = 1;
            while(n!=1){
            	if(n%2!=0)
                    n = (3*n)+1;
                else
                    n = n/2;
                    cycle_Length++;
            }
                if(cycle_Length > maxCycle_Length)
                    maxCycle_Length = cycle_Length;
                    i++;
        }
        cout << tempi << " " << tempj << " " << maxCycle_Length << endl;
	}
	return 0;
}
