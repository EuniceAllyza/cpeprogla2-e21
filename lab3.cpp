#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], ans;
int n, flag, choice;

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int chooser);
char again(char ans);

void problem1() {
	cout << "\n\nSTRING COMPARE\n\n";
	cin.ignore();
	cout << "Enter a first word (str1): ";
	gets(str1);
	cout << "Enter second word  (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0)
		cout << "equal =\n";
	else if(strcmp(str1,str2)>0)
		cout << "positive +\n";
	else if(strcmp(str1,str2)<0)
		cout << "negative -\n";
}

void problem2() {
	cout << "\n\nSTRING COPY\n\n";
	cin.ignore();
	cout << "Enter a first word (str1): ";
	gets(str1);
	cout << "Enter second word  (str2): ";
	gets(str2);
	cout << "New string value for str1: " << strcpy(str1, str2);
}

void problem3() {
	cout << "\n\nSTRING CONCATENATION\n\n";
	cin.ignore();
	cout << "Enter a first word (str1): ";
	gets(str1);
	cout << "Enter second word  (str2): ";
	gets(str2);
	cout << "New string value for str1: " << strcat(str1, str2);
}

void problem4() {
	cout << "\n\nPALINDROME\n\n";
	cin.ignore();
	cout << "Enter a word: ";
	gets(word);
	n=strlen(word);
	for(int i=0;i<n;i++) {
		if(word[i]!=word[n-(i+1)])
			flag=0;
		else flag=1;
    }
    if(flag==1)
		cout << "The word " << word << " is a palindrome.";
    else if(flag==0)
		cout << "The word " << word << " is NOT a palindrome.";
}

void problem5() {
	cout << "\n\nCAPITALIZATION\n\n";
	cin.ignore();
	cout << "Enter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32)
			word[i+1]-=32;
	}
	cout << word << endl;
}

void problem6() {
	cout << "\n\nREVERSE VERTICAL ORDER\n\n";
	cin.ignore();
	cout << "Enter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<n) {
				cout<<word[j];
				j++;
			}
			cout << endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout << word[k];
		k++;
	}
}

int choose(int choice) {
	cout << "Choose a problem no. to solve:\n";
	cout << "1: String Compare\n2: String Copy\n3: String Concatenation\n4: Palindrome\n5: Capitalization\n6: Reverse Vertical Order\n";
	cin >> choice;
	switch(choice) {
		case 1:
			problem1();
			again(ans);
			break;
		case 2:
			problem2();
			again(ans);
			break;
		case 3:
			problem3();
			again(ans);
			break;
		case 4:
			problem4();
			again(ans);
			break;
		case 5:
			problem5();
			again(ans);
			break;
		case 6:
			problem6();
			again(ans);
			break;
		default:
			break;
	}
	return choice;
}

char again(char ans) {
	cout << "\n\nSolve another problem? [Y/N] ";
	cin >> ans;
	if(ans=='y') {
		system("cls");
		choose(choice);
	}
	else if(ans=='n') {
		cout << "Thank you for using this program.\n";
	}
	else {
		again(ans);
	}
	return ans;
}

main() {
	choose(choice);
}
