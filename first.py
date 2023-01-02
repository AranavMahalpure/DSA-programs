n = int(input("Enter no of students"))
marks = []
max = int(input("Enter maximum marks"))

#taking marks
print("Enter marks of students on seperate lines.")
print("Note: use -1 for absent students")
for i in range(n):
	marks.append(int(input("")))
print(marks)

#initialize everthing to 0
tot_score = 0
avg_score = 0
absent = 0
h_score = 0
l_score = max
temp_freq = []
for i in range(max+2):
	temp_freq.append(0)


#calculating everything
for i in marks:
	if i < 0:
		absent += 1
		continue
	else:
		tot_score += i
		if i < l_score:
			l_score = i
		if i > h_score:
			h_score = i
		
		temp_freq[i] += 1
		
avg_score = tot_score/(n-absent)
print(temp_freq)

#calculate maximum freq
max_freq = 0
for i in temp_freq:
	if i > max_freq:
		max_freq = i

#show marks with maximum freq
max_freq_marks = []
for i in range(max+2):
	if temp_freq[i] == max_freq:
		max_freq_marks.append(i)
		
#print marks with max freq
#print("marks with max freq are {0}".format(max_freq_marks))
		

print("The Average score of class is {0}".format(round(avg_score,2)))
print("The Highest score of class is {0}".format(h_score))
print("The Lowest score of class is {0}".format(l_score))
print("{0} Students were absent for the class".format(absent))
print("marks with max freq are {0}".format(max_freq_marks))

#print(max_freq)

#print(absent)
#print(tot_score)
#print(avg_score)
#print(l_score)
#print(h_score)


