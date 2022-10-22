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
};
class EmailAlert : public IAlerter
    {
        public:int emailSent=1;
        void alerters()
        {
             
        }
        
    };
    class LEDAlert : public IAlerter
    {
        public:int ledGlows=1;
        void alerters()
        {
             
        }
    };
class StatsAlerter {
    public:
    float maxT;
//     float maxe;
    std::vector<IAlerter*> m_alert;
    
    // constructor
    StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters) 
    {maxT = maxThreshold; 
      m_alert = alerters;}
    
    void checkAndAlert(std::vector<float> vals ) 
    {
        auto comStat = Statistics::ComputeStatistics(vals);
        if (comStat.max > maxT)
        {
            for (size_t i = 0; i < alerters.size(); i++)
        {
            m_alert.at(i)->alerters();
        }
        }
//         maxe = vals.at(0);
    }
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
    
    
}
