def accept_mat():
	M = []
	print("Accepting Matrix")
	m = int(input("Enter number of rows of Matrix"))
	n = int(input("Enter number of column of Matrix"))
	for i in range(m):
		tmp = []
		for j in range(n):
			tmp.append(int(input("Enter Element")))
		M.append(tmp)
	return M

def display_mat(M):
	for i in M:
		for j in i:
			print(j,end=" ")
		print()
	print()


def add_mat(M1,M2):
	r1 = len(M1)
	c1 = len(M1[0])
	r2 = len(M2)
	c2 = len(M2[0])
	#check condition of addition
	if (r1==r2 and c1==c2):
		print("Addition of two matrices is")
		res = []
		for i in range(r1):
			tmp = []
			for j in range(c1):
				tmp.append(M1[i][j] + M2[i][j])
			res.append(tmp)
		display_mat(res)
	else:
		print("Addition is not possible")

def sub_mat(M1,M2):
	r1 = len(M1)
	c1 = len(M1[0])
	r2 = len(M2)
	c2 = len(M2[0])
	#check condition of sub
	if (r1==r2 and c1==c2):
		print("substracting the matrix two from one")
		res = []
		for i in range(r1):
			tmp = []
			for j in range(c1):
				tmp.append(M1[i][j] - M2[i][j])
			res.append(tmp)
		display_mat(res)
	else:
		print("substraction is not possible")



def mult_mat(M1,M2):
	r1 = len(M1)
	c1 = len(M1[0])
	r2 = len(M2)
	c2 = len(M2[0])
	#check condition of addition
	if (c1==r2):
		#do multiplication
		print("Multiplication of two matrx is")
		res = []
		for i in range(r1):
			tmp = []
			for j in range(c2):
				tmp.append(0)
			res.append(tmp)
		for i in range(r1):
		    for j in range(c2):
		        for k in range(r2):
		            res[i][j] += M1[i][k] * M2[k][j]
		display_mat(res)
	else:
		print("multiplication is not possible")		



def main():
	M1 = [[1, 2], [3, 4]]
	M2 = [[4, 3], [3, 7]]
#	print("First Matrix")
#	M1 = accept_mat()
	display_mat(M1)
#	print("Second Matrix")
#	M2 = accept_mat()
	display_mat(M2)
	add_mat(M1,M2)
	sub_mat(M1,M2)
	mult_mat(M1,M2)

main()
