
def check_awesomeness (x):
    prev = -1
    current = 0
    test = x
    while test > 0:
        current = test%10
        test //= 10
        if current <= prev:
            return False
        prev = current

    if x == current:
        return  False
    return  True


x = int(input())

if check_awesomeness(x) :
    print("True")
else:
    print("False")

