#include <iostream> 
#include <cstdlib> 
#include <ctime> 

// Sinh so ngau nhien trong khoan [a, b] ; VD duoi [22 100];
using namespace std;
int main()
{
    srand(time(0));
    int number[200];
    for(int i = 1; i <= 200; i++)
    {
        number[i] = 1 + rand()%(100-22+1);    
        /* hoac co the viet:
           number[i] = 1 + rand()%(79);               
        */
    }
    for(int i = 1; i <= 200; i++)
    {
        cout<<number[i]<<"  ";
        if(i%20 == 0)
                cout<<"\n\n";
    }
    cout<<"\n";
    //system("pause");
    return 0;
}
