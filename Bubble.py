list1 = [1, 2, 4, 7, 90, 3, 5, 67]
for i in range(len(list1)-1):
    for j in range(1, len(list1)-1-i):
	if list1[j] > list[j+1]:
	    list1[j], list1[j+1] = list1[j+1], list[j]
print(list1)
