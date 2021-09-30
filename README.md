# IRCAP227
                                            Simple code to use the Infrared sensor IRCAP227

The IRCAP227 is an infrared module that you can find in the market. His particularity is to have simultaneously the transmitter and the receiver on the same board. It works simply by sending a signal through the arduino pin (Low or High). When the signal is HIGH, we know that something has passed in front of the sensor.


The connection between an Arduino and this sensor is simple:

Arduino               ---------------         IRCAP227

5V                       ---------               VCC

GND                      ---------               GND

DigitalPin(7)            ---------               OUT



![Screenshot_select-area_20210930132335](https://user-images.githubusercontent.com/71699176/135455237-b2b79de3-3a08-4b9f-9d2d-c107a78068c6.png)

An image of the sensor.
