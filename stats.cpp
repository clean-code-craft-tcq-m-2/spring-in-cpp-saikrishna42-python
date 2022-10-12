#include "stats.h"
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
    stats s;
    int i;
    float sum=0,max=0,min=0;
    if(vec.size()==0)
    {
        s.average =NAN;
        s.max=NAN;
        s.min=NAN;
    }
    else
    {
        s.max=vec[0];
        s.min=vec[0];
        for(i = vec.begin(); i != vec.end(); ++i)
         {
            sum+=i;
            if(min>i)
                min=i;
            if(max<i)
                max=i;
          }
        s.average =sum/vec.size();
        s.max=max;
        s.min=min;
     }
    return s;
}
