#include <iostream>
using namespace std;
int main()
{
    string  x , rem ="";
    int sum;
    for(int i=0; i<=10; i++)
    {
        sum = i;
        rem = "";
        do
        {
            if ((sum%2) == 0)
            {
                rem += '0';
                sum = sum / 2;
            }
            else if ((sum%2) == 1)
            {
                rem += '1';
                sum = sum / 2;
            }
        }
        while (sum != 0);
        for (int j = rem.size() ; j >=0 ; j--){
            x +=rem[j];
        }
        cout<<"the binary number of ("<< i << ") is : " << x << endl;
        x = "";
    }
    return 0;
}


