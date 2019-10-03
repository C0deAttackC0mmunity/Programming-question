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
