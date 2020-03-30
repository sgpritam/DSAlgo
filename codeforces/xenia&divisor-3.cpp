#include <iostream>

#include <stdio.h>

#include <string.h>

#include <math.h>

using namespace std;

int main()

{

    double h,r;double temp=sqrt(3.0)/2.0;

    while(scanf("%lf%lf",&r,&h)!=EOF){

        int ans=2*(int)(h/r);
        double t=h-ans/2.0*1.0*r;



        if(t<r/2.0)ans++;

        else if(t<temp*r)ans+=2;

        else ans+=3;

        printf("%d\n",ans);

    }

    return 0;

}
