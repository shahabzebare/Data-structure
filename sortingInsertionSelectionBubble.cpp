/*
*   @author : Shahab Zebari
*   Sorting Algorithms
*
*   copyRight For Me & You & ALl
*/

#include <iostream>

using namespace std;


// function insertion sort 
void insertionSort(int a[],int s)
{
	for (int i = 1; i < s; i++)
	{
		int temp = a[i];
		int j;
		for (j = i-1; j>=0 && temp < a[j]; j--)
			a[j+1] = a[j];
		a[j+1] = temp;
	}
}

// function selection Sort
void selectionSort(int a[],int s)
{
	for (int i = 0; i < s; i++)
	{
		int min = i;
		for (int j = i+1; j < s; j++)
			if(a[j] < a[min])
				min = j;
		//swamp 
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

// function Bubble Sort
void bubbleSort(int a[],int s)
{
	for (int i =s-1; i >= 0; i--)
	{
		bool flag = false;// flag to finde the Array Is Sorted
		for (int j = 0; j < i; j++)
		{
			if(a[j]>a[j+1])
			{
				//swap
				int temp = a[j];
				a[j]  = a[j+1];
				a[j+1] = temp;
				flag = true;
			}
			if(!flag)// if Sorted
				return;
		}
	}
}

// function Inseert Data In To  Array
void insert(int a[],int s)
{
	for (int i = 0; i < s; i++)
	{
		cout<<"please insert Arr [ " << i <<" ]  : "  ;
		cin>>a[i];
	}
}

// function Print Array Element
void print(int a[],int s)
{
	cout<<"\n\nThe Elements is \n\n";
	for (int i = 0; i < s; i++)
		cout<<a[i]<<"   " ;
	cout<<endl;
}

// main function
void main()
{
	int arr[5];//define New Array
	
	insert(arr,5);//call Insert function
	print(arr,5);// print element Array Befor Sort
	
	// write an function sort in her e.g Bubble Sort
	bubbleSort(arr,5);
	
	
	cout<<"\n\nAfter sort \n\n";
	
	print(arr,5);//print Element After Sort
	
	system("pause");
}
