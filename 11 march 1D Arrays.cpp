// 11 march 2D Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//declaration of constants
const int SIZE = 5;

//function prototypes
void populateData(string name[], int age[], char gender[], float height[], int size);
void displayAll(string name[], int age[], char gender[], float height[], int size);
string findOldest(string name[], int age[], int size);
double calcAve(int age[], int size);
void sortAll(string name[], int age[], char gender[], float height[], int size);


int main()
{
	//declaration of variables
	string name[SIZE];
	int age[SIZE];
	char gender[SIZE];
	float height[SIZE];
	string old = " ";
	double average = 0.0;

	//call functions
	populateData(name, age, gender, height, SIZE);
	displayAll(name, age, gender, height, SIZE);
	old = findOldest(name, age, SIZE);
	cout << "The oldest person is " << old << endl;
	average = calcAve(age, SIZE);
	cout << "The average is " << average << endl;
	sortAll(name, age, gender, height, SIZE);



	_getch();
	return 0;
}
//first function
void populateData(string name[], int age[], char gender[], float height[], int size)
{
	//introduction of for loop and allowing user to enter values
	for (int i = 0; i < size; i++)
	{
		cout << "Enter name ";
		cin >> name[i];
		cout << "Enter age ";
		cin >> age[i];
		cout << "Enter gender (F for female / M for male) : ";
		cin >> gender[i];
		cout << "Enter height in cm ";
		cin >> height[i];
	}
}
//second function
void displayAll(string name[], int age[], char gender[], float height[], int size)
{
	//introduction of for loop and displaying values
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << "\t" << age[i] << "\t" << gender[i] << "\t" << height[i] << endl;
	}

}
//third function
string findOldest(string name[],int age[], int size)
{
	//declaration
	int index = 0;
	int old = 0;

	//introduction of for loop and finding th oldest
	for (int i = 0; i < size; i++)
	{
		//introduction of if statement
		if (age[i] > old)
		{
			old = age[i];
			index = i;
		}
	}

	return name[index];
}
//fourth function
double calcAve(int age[], int size)
{
	//declaration
	double average = 0;
	int count = 0;
	int total = 0;

	//introduction of for loop and finding th oldest
	for (int i = 0; i < size; i++)
	{
		//sum of all 
		total = total + age[i];
		count++;
	}
	//calculation of average
	average = total / count;

	return average;
}
//last function
void sortAll(string name[], int age[], char gender[], float height[], int size)
{
	//declaration 
	string tempName = " ";
	int tempAge = 0;
	float tempHeight = 0.0f;
	//using nested for loops to sort name
	for (int i = 0; i < size; i++)
	{
		//introduction of inner loop
		for (int k = 0;k < size - 1;k++)
		{
			//introduction of if statement
			if (name[k] > name[k + 1])
			{
				//swap variables
				tempName = name[k];
				name[k] = name[k + 1];
				name[k + 1]=tempName;
			}
		}
	}
	//using nested for loops to sort with age
	for (int i = 0; i < size; i++)
	{
		//introduction of inner loop
		for (int k = 0;k < size - 1;k++)
		{
			//introduction of if statement
			if (age[k] > age[k + 1])
			{
				tempAge = age[k];
				age[k] = age[k + 1];
				age[k + 1]=tempAge;

			}
		}
	}

	//using nested for loops to sort with height
	for (int i = 0; i < size; i++)
	{
		//introduction of inner loop
		for (int k = 0;k < size - 1;k++)
		{
			//introduction of if statement
			if (height[k] > height[k + 1])
			{
				tempHeight = height[k];
				height[k] = height[k + 1];
				height[k + 1] = tempHeight;

			}
		}
	}
}