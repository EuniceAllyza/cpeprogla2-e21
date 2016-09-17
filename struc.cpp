#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3]   ;    
};

void newLine();

int main(){
    Student stud;
    int ave = 0;
    int sum = 0;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.grade[i+1];
            sum+=stud.grade[i+1];
    }

    cout << "\n\n";
    cout << "Student Record:\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << stud.grade[i+1] << endl;       
    }
    ave = sum/3;
    cout << "Grade: " << ave;
    if(ave>=75)
    	cout << "\nRemarks: Passed";
    else
    	cout << "\nRemarks: Failed";

    system("pause > 0");
    return 0;   
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
