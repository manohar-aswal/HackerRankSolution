if __name__ == '__main__':
    N = int(input())
    List = []
    for i in range(N):
        QueryL = list(map(str, input().strip().split()))
        if "insert" == QueryL[0]:
            List.insert(int(QueryL[1]), int(QueryL[2]))
        elif "print" == QueryL[0]:
            print(List)
        elif "remove" == QueryL[0]:
            List.remove(int(QueryL[1]))
        elif "append" == QueryL[0]:
            List.append(int(QueryL[1]))
        elif "sort" == QueryL[0]:
            List.sort()
        elif "pop" == QueryL[0]:
            List.pop()
        elif "reverse" == QueryL[0]:
            List.reverse()
