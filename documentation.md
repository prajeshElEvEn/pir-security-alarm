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

## How to use the script?

- Make connections as shown in the circuit diagram.
  - PIN 7 to PIR Sensor's OUT pin.
  - PIN 5V to PIR Sensor's VCC pin.
  - PIN GND to PIR Sensor's GND pin.
  - PIN 6 to Buzzer's positive pin.
  - PIN GND to Buzzer's negative pin.
  - PIN 5 to LED's positive pin, with resistor in the middle.
  - PIN GND to LED's negative pin.

![Circuit Diagram](./assets/ckt_diagram.png?raw=true "circuit diagram")

- Open Arduino IDE software.
- Navigate to File > Open and select the `main.cpp` script.
- Connect the Arduino board to the computer.
- Select the board and port from the Tools menu.
- Upload the script to the Arduino board.
- The script is ready to use.

Now, when motion is detected, the buzzer will start beeping and the LED will start glowing.
`Note: The delay time of the module is set to 7 seconds.`

[< Go back](https://github.com/prajeshElEvEn/pir-security-alarm)
