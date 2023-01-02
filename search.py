def linearsearch(n,arr,key):
	flag = 0
	for i in range(n):
		if(arr[i] == key):
			print("Key is present")
			flag = 1
			break
	if(flag==0):
		print("Key is not present")	

def sentinalsearch(n,arr,key):
	last = arr[-1]
	arr[-1] = key 
	i = 0
	while(arr[i] != key):
		i = i + 1
	arr[-1] = last 
	if(i<n-1) or (last == key):
		print("Key is present")
	else:
		print("Key is not present")
	

def main():
	n = int(input("Enter no of elements : "))
	arr = []
	for i in range(n):
		arr.append(int(input("Enter element no {0} : ".format(i))))
	key = int(input("Enter key to find : "))
	
	print("Searching by linear search")
	linearsearch(n,arr,key)

	print("Searching by sentinal search")
	sentinalsearch(n,arr,key)


main()
