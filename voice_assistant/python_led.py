import speech_recognition as sr
import serial
import time
print(" waiting for you to get ready")
time.sleep(3)
ser = serial.Serial('COM6', 9600)

r = sr.Recognizer()

while True:
    with sr.Microphone()as source:
        print("speak on or of to turn on or of the LED")
        audio = r.listen(source)
        command = r.recognize_google(audio)

        try:
        
            
            print(f' You said: {command}\n')
            if command == 'turn on one':
                ser.write(b'0')
            elif command == 'turn off one':
                ser.write(b'1')
            elif command == 'turn on two':
                ser.write(b'2')
            elif command == 'turn off two':
                ser.write(b'3')
            elif command == 'turn on blue':
                ser.write(b'4')
            elif command == 'turn off blue':
                ser.write(b'5')
            elif command == "turn on all":
                ser.write(b'6')
            elif command == "turn off all":
                ser.write(b'7')
            
        except:
            print("please repeat")
