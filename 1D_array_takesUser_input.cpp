#include <iostream>

using namespace std;

int main()
{
   int size;
   cout << "Enter array size(length): ";
   cin >> size;
   int *arr = new int[size];

   for(int i = 0; i<size; i++)
   {
        cin>>arr[i];
   }

    return 0;
}
