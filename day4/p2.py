#Accept a number and find its square and squareroot

import math

print('Enter a number to find its Root')
input_number = int(input()) #input takes always as a string

root_number = math.sqrt(input_number)
print('Sqaure root of ',input_number,'is',root_number)
print('Sqaure root of ',input_number,'is '+ str(root_number))