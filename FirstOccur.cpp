//print the first occurance and also the number of occurance of a target number with binary search
#include <iostream>
using namespace std;
int main()
{
    int size;
    int target;
    int count = 0;
    int firstOccur = -1;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Target number: ";
    cin >> target;
    int first = 0;
    int last = size - 1;
    int mid; 
    while(first <= last)
    {
        mid = (first + last) / 2;
        if(arr[mid] == target)
        {
            firstOccur = mid;
            last = mid - 1;
        }
        else if(arr[mid] < target)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if(firstOccur != -1)
    {
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == target)
            {
                count++;
            }
        }
        cout << "First occurrence of " << target << " is at index " << firstOccur << endl;
        cout << "Number of occurrences of " << target << " is " << count << endl;
    }
    else
    {
        cout << target << " not found in the array" << endl;
    }
    
    return 0;
}