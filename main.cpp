#include <iostream>
#include <string>
using namespace std;
string ceaser(string msg,int k)
{
    int size=msg.size();
    for (int i=0;i<size;i++)
    {
        int N=(int)msg[i];
        N+=k;
        if(N<97)
        {
            N=123-(97-N)%26;
        }
        if (N>122)
        {
            N=96 + (N-122)%26;
        }
        msg[i]=N;
    }
    return msg;
}
void cod_ceaser(char operation,int i, string message)  // с- кодировать, d - декодировать
{
    if (operation=='c')
    {
        cout << ceaser(message,i) << endl;
    }
    if (operation=='d')
    {
        int d=-i;
        cout << ceaser(message,d) << endl;
    }
}

int main() {
    cod_ceaser('c',1,"hello");
    cod_ceaser('d',1,"ifmmp");

}
