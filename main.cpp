//#include "stdafx.h"
#include<iostream>
using namespace std;
void InsertSort(int a[], int n)
{
	for(int j =0;j<n;j++)
	{
		int min=j;
		for (int i = j+1; i < 7; i++)
		{
			if(a[min]>a[i])
			{
				int temp;
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}
		}
	}
	
   
}
int main() {
    int d[] = { 12, 15, 9, 20, 6, 31, 24 };
    cout << "输入数组  { 12, 15, 9, 20, 6, 31, 24 } " << endl;
    InsertSort(d,7);
    cout << "排序后结果：";
    for (int i = 0; i < 7; i++)
    {
        cout << d[i]<<" ";
    }
    return 0;
 
}
