///header file math.h
/**
    sin,cos,tan,asin,acos,atan,sinh,cosh,tanh
    exp,log,log10,sqrt,pow,fmod,fabs,labs,floor,ceil
    */

#include<stdio.h>
#include<math.h>

int main()
{
    ///printf("%lf\n",sin(1.5));
/**
    double a=sin(1.5);
    printf("%lf\n",asin(a));
*/

    ///printf("%lf\n",sinh(1.5));

    ///printf("%lf\n",exp(1));

    ///printf("%lf\n",log(2));

    ///printf("%lf\n",log10(100));

    ///printf("%lf\n",pow(2,3));

    ///printf("%lf\n",sqrt(2));

    ///printf("%lf\n",fmod(4,5));

    ///printf("%lf\n",fabs(-4.5));

    ///printf("%ld\n",labs(-100));

    ///printf("%lf\n",floor(4.4));

    ///printf("%lf\n",ceil(4.5));

    double pi;
    pi=2*acos(0);
    printf("%lf",pi);

    return 0;
}
