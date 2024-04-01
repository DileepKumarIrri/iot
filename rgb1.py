import RPi.GPIO as GPIO
import time

print("=== RGB LED TEST ===")
print(" Connect 10 11 12 13 to Gr R G B of RGB LED")
#i = input(" enter the colour: ")
GPIO.setmode(GPIO.BCM)
buzzer = 14
commonCathode = 10
red = 11
green = 12
blue = 13

def ledcolour(colour="none"):
    for x in range(10,15):
        GPIO.setup(x, GPIO.OUT)
        GPIO.output(x, GPIO.LOW)
    if(colour == "red"):
        GPIO.output(red, GPIO.HIGH)
    elif(colour == "green"):
        GPIO.output(green, GPIO.HIGH)
        GPIO.output(buzzer, GPIO.HIGH)
    elif(colour == "blue"):
        GPIO.output(blue, GPIO.HIGH)
    elif(colour == "buzzer"):
        GPIO.output(buzzer, GPIO.HIGH)
        
while True:
    i = input(" enter the colour: ")
    ledcolour(i)
    time.sleep(2)