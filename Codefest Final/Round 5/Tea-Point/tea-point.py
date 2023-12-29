inputFile = open('input.txt', 'r')
outputFile = open('output.txt', 'w')

testCase = int(inputFile.readline())
while testCase > 0:
    temp = inputFile.readline().split(' ')
    B = temp[0]
    C = temp[1]
    D = temp[2]

    numberOfCustomer = inputFile.readline().split(" ")

    for i in range(len(numberOfCustomer)):
        numberOfCustomer[i] = int(numberOfCustomer[i])
    numberOfCustomer.sort()
    med = numberOfCustomer[4]
    outputFile.write(str(med) + '\n')

    testCase -= 1