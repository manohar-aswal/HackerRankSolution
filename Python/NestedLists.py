import math

if __name__ == '__main__':
    nm = []
    sc = []
    out = []
    for _ in range(int(input())):
        name = input()
        nm.append(name)
        score = float(input())
        sc.append(score)

    sc_copy = sc[:]
    sc_copy = list(dict.fromkeys(sc_copy))
    sc_copy.sort()
    Low2 = sc_copy[1]

    for i in range(len(sc)):
        if Low2 == sc[i]:
            out.append(nm[i])

    out.sort()
    for i in out:
        print(i)
