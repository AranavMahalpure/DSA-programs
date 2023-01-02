def swap(arr,a,b):
	tmp = arr[a]
	arr[a] = arr[b]
	arr[b] = tmp

def partition(arr,p,q):
	i = p
	x = arr[i]
	for j in range(i+1,q+1):
		if(arr[j]<=x):
			i += 1
			swap(arr,i,j)
	swap(arr,i,p)
	return i
	
def quicksort(arr,p,q):
	if(p<q):
		i = partition(arr,p,q)
		quicksort(arr,p,i-1)
		quicksort(arr,i+1,q)
	
	
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
	arr = []
	accept_array(arr)
	print("Array before sorting\n",arr)
	quicksort(arr,0,len(arr)-1)
	print("Array after sorting\n",arr)
	high_scores(arr)
	

main()
