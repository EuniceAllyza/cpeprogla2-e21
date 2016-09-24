#include<iostream>
#include<cstring>
using namespace std;
int flag=0, len=0, x=0, choice;
char str1[50], str2[50], str[50], *s1, *s2, ans;

void myStrCpy();
void myStrCmp();
void myStrCat();
int myStrLen(char*);
int choose(int choice);
char again(char ans);
char myRev(char*str);

void myStrCpy() {
	cout << "\nEnter first string: ";
	cin.ignore();
    gets(str1);
    cout << "Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	*s1=*s2;
    	cout << str1[i];
	}  
}

void myStrCmp() {
	cout << "\nEnter first string: ";
	cin.ignore();
    gets(str1);
    cout << "Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if(*s1==*s2)
			flag+=0;
		else if(*s2<*s1)
			flag+=1;
		else if(*s2>*s1)
			flag-=1;
	}
	if(flag==0)
		cout << "Equal";
	else if(flag>0)
		cout << "Positive";
	else if(flag<0)
		cout << "Negative";
}

void myStrCat() {
	cout << "\nEnter first string: ";
	cin.ignore();
    gets(str1);
    cout << "Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	s1=&str1[i];
    	cout << *s1;
	}
	for(int i=0;i<strlen(str2);i++){
    	s2=&str2[i];
    	cout << *s2;
	}
}

int myStrLen(char*s1){
	cout << "\nEnter a string: ";
	cin.ignore();
    gets(str1);
	while(*s1!='\0') {
		x++;
		s1++;
	}
	cout << "The length of the string is: " << x;
	return x;
}

char myRev(char*str) {
	cout << "\nEnter a string: ";
	cin.ignore();
    gets(str);
    cout << "The reverse is: ";
	len=strlen(str);
	for(int i=len-1;i>=0;i--) {
		cout << str[i];
	}
}

int choose(int chooser) {
	cout << "Choose a problem no. to solve :\n1: String Copy\n2: String Compare\n3: String Concatenation\n4: String Length\n5: String Reversing\n";
	cin >> choice;
	switch(choice) {
		case 1:
			myStrCpy();
			again(ans);
			break;
		case 2:
			myStrCmp();
			again(ans);
			break;
		case 3:
			myStrCat();
			again(ans);
			break;
		case 4:
			myStrLen(str1);
			again(ans);
			break;
		case 5:
			myRev(str1);
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
		cout << "Thank you for using this program. \n";
	}
	else {
		again(ans);
	}
	return ans;
}

main() {
	choose(choice);
}
