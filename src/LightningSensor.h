#ifndef _LIGHTNING_SENSOR_H_
#define _LIGHTNING_SENSOR_H_

#include "SensorSettings.h"
#include "SensorEvent.h"

class LightningSensor
{
  private:
    void attachInterruptPin(void);
    void detachInterruptPin(void);

  public:
    int begin(SensorSettings sensorSettings, bool enableInterruptPin = true);
    SparkFun_AS3935& getSensor();
    bool getSensorEvent(SensorEvent *sensorEvent);
};
#endif
