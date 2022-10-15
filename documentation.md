# Documentation

Welcome to PIR Sensor based Security Alarm Systems documentation.

## How PIR works?

- PIR Sensor contains a pyroelectric sensor that generates energy when exposed to heat. Thus, the sensor absorbs energy from the heat emitted by the human body or an animal body in the form of infra-red radiation. Hence, the name PIR `Passive Infra-red` sensor.
- The module also contains a cover known as  `Fresnel Lens` that focuses all the radiation onto the sensor.
- The module has 3 pins:
  - VCC
    - 5V power supply is given to the module.
  - GND
    - ground pin.
  - OUT
    - generates `HIGH` output when motion is detected.
- The module consists of two potentiometers:
  - delay
    - controls the time delay between the detection of motion and the output of the module.
    - range - 0.3sec - 5min
  - sensitivity
    - controls the sensitivity of the module.
    - range - up-to 7 metres.
- The module has two triggers:
  - non-repetitive trigger
    - the module generates a HIGH output when motion is detected and then goes to LOW after the delay time, event if the object is present in sensor's range.
  - repetitive trigger
    - the module generates a continuous HIGH output till the object is in sensor's range. It goes to zero when the delay time gets over after the removal of object from the sensor's range.
