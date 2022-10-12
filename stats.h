#include <vector>
class Stats
    {
        public:float average=0;
               float max=0;
               float min=0;
    };
class EmailAlert 
    {
        public:int emailSent=1;
    };
    class LEDAlert 
    {
        public:int ledGlows=1;
    };
class IAlerter
{
    public:
    EmailAlert emailAlert;
    LEDAlert   ledAlert;
};
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
    
    
}
