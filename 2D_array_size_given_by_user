#include <iostream>

using namespace std;

int main()
{
   int width, height;
   cin>>width>>height;
   
   int** ara;
   
   ara = new int*[width];
   for (int i = 0;i<width;i++)
   ara[i] = new int[height];

   for(int i = 0; i<width; i++)
    { 
        for(int j = 0; j<height; j++)
        {
          cin>>ara[i][j];
        }
    }
    
cout<<endl;

    for(int i = 0; i<width; i++)
    {
        for(int j = 0; j<height; j++)
        {
           cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }

    delete ara; //free up memory if necessary
    return 0;
}
