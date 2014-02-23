#include <iostream>

using namespace std;


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

void bubbleSort(int a[],int s)
{
	for (int i =s-1; i >= 0; i--)
	{
		bool flag = false;
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
			if(!flag)
				return;
		}
	}
}

void insert(int a[],int s)
{
	for (int i = 0; i < s; i++)
	{
		cout<<"please insert Arr [ " << i <<" ]  : "  ;
		cin>>a[i];
	}
}

void print(int a[],int s)
{
	cout<<"\n\nThe Elements is \n\n";
	for (int i = 0; i < s; i++)
		cout<<a[i]<<"   " ;
	cout<<endl;
}
void main()
{
	int arr[5];
	insert(arr,5);
	print(arr,5);
	bubbleSort(arr,5);
	cout<<"\n\nAfter sort \n\n";
	print(arr,5);
	system("pause");
}
