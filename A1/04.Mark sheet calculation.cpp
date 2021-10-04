/* “Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)” */

#include<bits/stdc++.h>
using namespace std;
int main()
{

	int marks[5],total_marks = 5 * 100,total = 0;
	char grade = 'F';
  cout<<"Enter Youur Marks of Five Subjects ";
	for (int i = 0; i < 5; i++)
	{
    cin>>marks[i];
		total += marks[i];
	}
  cout<<"Your Marks are :"<<endl;
  for (int i = 0; i < 5; i++)
    cout<<marks[i]<<endl;
  cout<<endl;
	double percentage = ((double)(total) / total_marks) * 100;
  cout<<"Your Total Marks are = "<<total<<"/500"<<endl;
  cout<<"Your Percentage is = "<<percentage<<"%"<<endl;
  if (percentage >= 90)
		grade = 'A';
	else if (percentage >= 80 && percentage <90)
	    grade = 'B';
	else if (percentage >= 60 && percentage <80)
		grade = 'C';
	else if (percentage >= 33 && percentage < 60)
		grade = 'D';
	else
		grade = 'F';
	cout << (grade) << endl;
}

/*
OUTPUT:-

Enter Youur Marks of Five Subjects Your Marks are :
56
56
56
65
64

Your Total Marks are = 297/500
Your Percentage is = 59.4%
D

*/
