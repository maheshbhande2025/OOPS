#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    void read(int real, int img)
    {
        r = real;
        i = img;
    }

    void display()
    {
        if (i > 0)
        {
            cout << r << "+" << i << "i";
        }
        else
        {
            cout << r << i << "i";
        }
    }

    complex operator+(complex b)
    {
        complex res;

        res.r = r + b.r;
        res.i = i + b.i;

        return res;
    }
};
int main(){
    int r1,i1,r2,i2;
    complex c1,c2,c3;
    cout<<"Enter the real and imaginary parts of first complex no:"<<endl;
    cin>>r1>>i1;
    
    cout<<"Enter the real and imaginary parts of second complex no:"<<endl;
    cin>>r2>>i2;
    c1.read(r1,i1);
    c2.read(r2,i2);
    cout<<"The sum is";
    c3=c1+c2;
    c3.display();


}
