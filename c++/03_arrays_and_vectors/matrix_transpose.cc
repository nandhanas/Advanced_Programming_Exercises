#include<iostream>
#include<array>
using namespace std;

void transpose(array<array<double,3>,3> matrix)
{
	array<array<double,3>,3> transpose_matrix;
	for(int i=0; i<3; ++i)
	{
      for(int j=0; j<3; ++j) 
      {
        transpose_matrix[j][i] = matrix[i][j];
      }
    }
    cout<<"Transpose Matrix:"<<endl;
    for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<transpose_matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	array<array<double,3>,3> matrix;
	cout<<"Enter the elements of 3*3 array"<<endl;
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"The Matrix:"<<endl;
    for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	transpose(matrix);
	return 0;
}