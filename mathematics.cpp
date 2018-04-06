#include <cmath>

long long int power(long long int number, int n)
{
    long long int result=number;


    if(n==0)
    {
        return 1;
    }

    if(n%2==0)
    {
        power((result*result),(n/2));
    }
    else
    {
        for(int i=n; i>1;i--)
        {
            result*=number;
        }
    }



    if(n<=1 && n>0)
    {
        return result;
    }



};

long long int factorial(int n)
{

     if(n>20 || n<0)
        return -1;


    long long int result=n;

    for(int i=n-1;i>1;i--)
    {
        result*=i;
    }

    return result;
};


long long int fibonacci(int n)
{
    if(n>80 || n<0)
    {
        return -1;
    }

long long int fib[80];

fib[0]=0;
fib[1]=1;

for(int i=2; i<=n;i++)
{
    fib[i]=fib[i-2]+fib[i-1];
}

return fib[n];

};

double sector_length(double x1, double y1, double x2, double y2)
{
    double result;

    if(x1==x2)
    {
        result=y1-y2;

        if(result<0)
        {
            result*=-1;
        }

        return result;
    }


    if(y1==y2)
    {
        result=x1-x2;

        if(result<0)
        {
            result*=-1;
        }

        return result;
    }

    result=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    if(result<0)
    {
        result*=-1;
    }

    return result;

};


double about_pi()
{
    return 3.141;
};

double sphere(char type, double R)
{
    double result;



    if(type=='S')
    {
        result=4*about_pi()*R*R;
        return result;
    }

    if(type=='V')
    {
        result=(4*about_pi()*R*R*R)/3;
        return result;
    }

    else
    {
        return -1;
    }
}




