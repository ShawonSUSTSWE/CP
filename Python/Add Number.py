from sys import stdin
trees = []
num = int(raw_input())
trees.append(int(raw_input()))
for i in xrange(num-1):
    trees.append(trees[-1] + int(raw_input()))
numq = int(raw_input())
rest = []
#rest = stdin.read().split("\n")
for i in xrange(numq):
    rest.append(raw_input())
for i in range(numq):
    a, b = rest[i].split()
    if int(a) == 0:
        print trees[int(b)]
    else:
        print trees[int(b)] - trees[int(a)-1]