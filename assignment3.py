def bubblesort(arr):
	print("Before sorting")
	print(arr)	
	for i in range(len(arr)-1):
		issorted = 0
		for j in range(len(arr)-1-i):
			if(arr[j]>arr[j+1]):
				tmp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = tmp
		if issorted == 0:
			break
		print("Passwise printing")
		print(arr)
	print("After sorting")
	print(arr)
	
	
def selectionsort(arr):
	print("Before sorting")
	print(arr)	
	for i in range(len(arr)-1):
		issorted = 0
		for j in range(i+1,len(arr)):
			if(arr[i]>arr[j]):
				tmp = arr[j]
				arr[j] = arr[i]
				arr[i] = tmp
				issorted += 1
		print("Passwise printing")				
		print(arr)
		if issorted == 0:
			break
	print("After sorting")
	print(arr)
	
	
def accept_array(arr):
	no = int(input("Enter no of students: "))	
	while no<5:
		no = int(input("Enter no of students minimum 5: "))
	
	for i in range(no):
		arr.append(float(input("Enter percentage of student: ")))
		
def high_scores(arr):
	print("Highest scores are")
	for i in range(5):
		print(arr[len(arr)-i-1],end="  ")
		
		
def main():
	print("By using Bubble sort\n")
	arr1 = []
	accept_array(arr1)
	bubblesort(arr1)
	high_scores(arr1)
	
	
	print("\n\nBy using Selection sort\n")
	arr2 = []
	accept_array(arr2)
	selectionsort(arr2)
	high_scores(arr2)
	
	
main()
