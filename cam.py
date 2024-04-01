from picamera import PiCamera
import time
cam = PiCamera()
cam.resolution = (640,480)
cam.start_preview()
time.sleep(1000)
f_name = '20082023.jpg'
cam.capture(f_name)
cam.stop_preview()
cam.close()

