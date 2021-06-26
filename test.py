def swapList(newList):
    size = len(newList)

    temp = newList[0]
    newList[0] = newList[size - 1]
    newList[size - 1] = temp
      
    return newList
      
size=int(input())

  
newList = list(map(int,input().strip().split()))[:size]

print(swapList(newList))