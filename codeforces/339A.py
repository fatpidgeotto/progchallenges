s = input()

order = sorted([x for x in s.split("+")])
print("+".join(order))
