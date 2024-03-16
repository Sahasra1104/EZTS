import RPi.GPIO as GPIO
import time

led1 = 14
led2 = 15

def blink(pin):
        GPIO.output(pin,GPIO.HIGH)
        time.sleep(0.5)
        GPIO.output(pin,GPIO.LOW)
        time.sleep(0.5)
        return
        GPIO.output(pin,GPIO.HIGH)
        time.sleep(1)
        GPIO.output(pin,GPIO.LOW)
        time.sleep(1)        
    
    

GPIO.setmode(GPIO.BCM)

GPIO.setup(led1, GPIO.OUT)
GPIO.setup(led2, GPIO.OUT)
for i in range(0,10):
        blink(led1)
        blink(led2)
GPIO.cleanup()
