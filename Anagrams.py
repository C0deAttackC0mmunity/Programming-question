#Given two strings, a and b , that may or may not be of the same length,
#determine the minimum number of character deletions required to make a and b anagrams.
#Any characters can be deleted from either of the strings.

for i in range(int(input())):
    l1=[i for i in input().sort()]
    l2=[i for i in input().sort()]
    count=0
    e='#'
    for i in l1:
        if i in l2:
            if e!=i:
                e=i
                count=count+min(l1.count(i),l2.count(i))
    print(len(l1)+len(l2)-2*count)
