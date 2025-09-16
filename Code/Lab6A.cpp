#include <iostream>
using namespace std;
int main()
{
	const int ROW_SIZE=2; //number of rows
	const int COLUMN_SIZE=5; //number of columns 
	int matrix [ROW_SIZE] [COLUMN_SIZE]; //2D array 
	for (int i=0; i<ROW_SIZE; ++i)
	{
		for (int h=0; h<COLUMN_SIZE; ++h)
		{
			cout<<"Enter data for row#"<<i+1<<" and column "<<h+1<<"; "; 
			cin>>matrix[i] [h]; // read matrix elements
		}
	}
	
	cout<<"You entered: "<<endl;
	for (int i=0; i<ROW_SIZE; ++i)
	{
		for (int h=0; h<COLUMN_SIZE; ++h)
		{
			cout<<matrix[i][h] << "\t";
		}
		cout<<endl;
	}
	int min_row[ROW_SIZE];
	for (int h=0; h<ROW_SIZE; ++h)
	{
		min_row[h] = matrix[1][1];
	}
	int min_col[COLUMN_SIZE];
	for (int h=0; h<COLUMN_SIZE; ++h)
	{
		min_col[h] = matrix[1][1];
	}
	
	
	for (int i=0; i<ROW_SIZE; ++i)
	{
		for (int h=0; h<COLUMN_SIZE; ++h)
		{
			if (matrix[i][h] < min_row[i]){
				min_row[i] = matrix[i][h];
			}
		}
	}
	for (int i=0; i<ROW_SIZE; ++i)
	{
		for (int h=0; h<COLUMN_SIZE; ++h)
		{
			if (matrix[i][h] < min_col[h]){
				min_col[h] = matrix[i][h];
			}
		}
	}
	
	cout<<"Minimum in Rows are: "<<endl;
	for (int i=0; i<ROW_SIZE; ++i)
	{
		cout<<min_row[i]<< "\t";
		
	}
	cout<<endl;
	cout<<"Minimum in Columns are: "<<endl;
	for (int i=0; i<COLUMN_SIZE; ++i)
	{
		cout<<min_col[i]<< "\t";
		
	}
	cout<<endl;
	
	return 0;
}