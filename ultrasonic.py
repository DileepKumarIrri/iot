import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
print("=== ultronic test ===")
print("Connect G 5V 24 25 to G V T E of ultrasonic")
def distance(trigPin, echoPin):
    GPIO.output(trigPin, True)
    time.sleep(0.00001)
    GPIO.output(trigPin, False)
    while GPIO.input(echoPin) == 0:
        pulse_start = time.time()
        
    while GPIO.input(echoPin) == 1:
        pulse_end = time.time()
        
    try:
        pulse_duration = pulse_end - pulse_start
    except:
        print("calibrating")
        return -1
    distance = pulse_duration * 17150
    distance = round(distance + 1.15,2)
    return distance
GPIO.setmode(GPIO.BCM)
#ultrasonic pins
trigPin = 24
echoPin = 25
GPIO.setup(trigPin, GPIO.OUT)
GPIO.setup(echoPin, GPIO.IN)


while True:
    dist = distance(trigPin, echoPin)
    print("Measured distance = {} cm".format(dist))
    time.sleep(2)