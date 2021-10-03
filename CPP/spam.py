import pyautogui, time
time.sleep(5)
f = open("spam",'r')
for word in f:
    pyautogui.typewrite("Hello")
    pyautogui.press("enter")
