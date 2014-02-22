/*
*   @author : Shahab Zebari
*   Sorting Algorithms
*
*   copyRight For Me & You & ALl
*/

#include <iostream>
using namespace std;


int num[] = {5,2,4,6,1,3};
const int SIZE = 6;

// function insertion Sort
void insertionSort()
{
    int t ;
    for(int i = 1;i<SIZE;i++)
    {
        t = num[i];
        int j;
        for(j=i-1;j>=0 && t<num[j];j--)
            num[j+1] = num[j];

        num[j+1] = t;
    }//end for
}//end function insertion Sort

// function selection Sort using Min number
void selectSortMin()
{
    for(int i =0;i<SIZE-1;i++)
    {
        int min = i;
        // finde index of min number
        for(int j = i+1;j<SIZE;j++)
            if(num[j]<num[min])
                min = j;
        // swamp
        int temp = num[i];
        num[i]= num[min];
        num[min] = temp;
    }//end for
}//end function Selection Sort using Min Number

// function Selection Sort Using Max Number
void selectSortMax()
{
    for(int i = SIZE-1;i>0;i--)
    {
        int max = i;
        // finde index of max Number
        for(int j=i-1;j>=0;j--)
            if(num[max]<num[j])
                max = j;
        // swamp
        int temp = num[i];
        num[i]= num[max];
        num[max] = temp;
    }// end for Loop
}//end function Selection sort Using Max Number


//function To Print Element An Array !D
void printArray(int a[],int l)
{
    for(int i=0;i<l;i++)
        cout<<a[i]<<"   ";
    cout<<"\n\n";
}

int main()
{

    selectSortMax();//call function Selection Sort use Max Number
    printArray(num,SIZE);

    //test Anthor Function In Her

    return 0;
}

