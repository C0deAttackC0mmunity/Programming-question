# submitted by shareef
from datetime import datetime
print('input in the form of "HH:MM:SSAM or PM"')
print('\n')
t= str(input(''))
t1 = datetime.strptime(t, "%I:%M:%S%p")
t2 = datetime.strftime(t1, "%H:%M:%S")
print(t2)
    
