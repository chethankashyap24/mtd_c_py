#program to print the numbers from m to n (m<n) with an increement of p

m = int(input('Enter the M value: (start value): '))
n = int(input('Enter the N value: (End value): '))
p = int(input('Enter the P value: (Increeement value): '))

for i in range(m,n,p):
    print(i, end=' ')
    i += 2