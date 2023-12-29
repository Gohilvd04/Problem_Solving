a = "Aliquam erat volutpat. Etiam eu ligula ligula."
b = "Lorem ipsum dolor sit amet, consectetur adipiscing elit."

arr1 = {}
arr2 = {}

for i in a:
    arr1[i] += 1

for i in b:
    arr2[i] += 2

for x, y in arr1:
    if arr1[x]==arr2[x]:
        print(x)