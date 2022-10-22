#include <vector>
class Stats
    {
        public:float average=0;
               float max=0;
               float min=0;
    };
class IAlerter
{
    public: void alerters ();
}
class EmailAlert : public IAlerter
    {
        public:int emailSent=1;
        
    };
    class LEDAlert : public IAlerter
    {
        public:int ledGlows=1;
    };

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
    
    
}
