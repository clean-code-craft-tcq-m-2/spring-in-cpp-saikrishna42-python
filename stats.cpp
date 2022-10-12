#include "stats.h"
#include <cmath>

Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
     Stats s;
    float i;
    float sum=0,max=0,min=0;
    if(vec.size()==0)
    {
        s.average =NAN;
        s.max=NAN;
        s.min=NAN;
    }
    else
    {
        max=vec[0];
        min=vec[0];
        for(i = 0; i != vec.size(); ++i)
         {
            
            sum+=vec[i];
            if(min>vec[i])
                min=vec[i];
            if(max<vec[i])
                max=vec[i];
          }
        s.average =sum/vec.size();
        s.max=max;
        s.min=min;
     }
    return s;
}
