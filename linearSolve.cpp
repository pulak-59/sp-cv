#include<iostream>
using namespace std;
int main()
{
    int list[5] = {1,2,5,7,9};
    int x = 5;
    for(int i = 0; i < 5; i++)
    {
        if(list[i] == x) 
            cout << "Found at index: " << i+1 << endl;
    }

    return 0;

}
