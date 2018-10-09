# solution submitted by Manish Prasad
n = input("Inter the Number ")
n = int(n)
cube = int (n*n*n)

isTrue = True

while(n > 0):
	if n%10 != cube%10:
		isTrue = False
	n = int(n/10)
	cube = int(cube/10)

if isTrue :
	print("True")

else:
	print("False")
