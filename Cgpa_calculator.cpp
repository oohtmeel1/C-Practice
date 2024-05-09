// Program to calculate CGPA

#include<bits/stdc++.h>
using namespace std;

double cgpaCalc(double marks[], int n)
{
	// VAR to store grades in
	// Every subject
	double grade[ n ];
	// Variable to store the CGPA and 
	// Sum of all of the grades
	double cgpa, sum = 0;

	// Computing the grades
	for (int i = 0; i <n; i++)
	{
		grade[i] = marks[i] / 10;
		sum += grade[i];
	}

	// Computing CGPA

	cgpa = sum / n;

	return cgpa;
}

// Driver code ?
int main()
{

	int n = 5;
	double marks[] ={ 90, 80, 100, 100, 90, 100};

	double cgpa = cgpaCalc(marks, n);
	
	cout << "CGPA = ";
	printf("%.1f\n",cgpa);
	cout << "CGPA Percent = ";
	printf("%.2f", cgpa *9.5);

}
