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
#			tmp = arr[i]
#			arr[i] = arr[j]
#			arr[j] = tmp
	swap(arr,i,p)
#	tmp = arr[i]
#	arr[i] = arr[p]
#	arr[p] = tmp
	return i
	
def quicksort(arr,p,q):
	if(p<q):
		i = partition(arr,p,q)
		quicksort(arr,p,i-1)
		quicksort(arr,i+1,q)
		
		
def main():
	print("Program for sorting array using quicksort")
	n = int(input("Enter no of elements : "))
	arr = []
	for i in range(n):
		arr.append(int(input("Enter Element no {0} : ".format(i))))
	print("Before sorting\n",arr)
	quicksort(arr,0,n-1)
	print("After sorting\n",arr)
	
	
main()
		
# arr = [2,3,6,2,74,52,52,63,96,63,6,41,23,56,15]		
#quicksort(arr,0,len(arr)-1)
#print(arr)