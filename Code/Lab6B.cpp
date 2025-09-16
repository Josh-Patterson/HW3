#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int Max = 100;
	char str1[30];
	char str2[Max];
	strcpy(str1, "We are completing Lab6 today.");
	cout<<"Enter a short message: ";
	cin.getline(str2, Max + 1);
	int Len1 = strlen(str1);
	int Len2 = strlen(str2);
	cout<<endl;
	if (Len1 != Len2){
		cout<<endl<<"This is not the same length as the saved message."<<endl;
		return 0;
	}
	if ((strcmp(str1, str2)) == 0){
		cout<<"The strings are the same!"<<endl;
	}
	else{
		cout<<"The strings are not the same."<<endl;
	}
	
	
	return 0;
}