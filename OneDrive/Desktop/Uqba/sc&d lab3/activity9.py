List=[1,2,3,4,5,6,7,8,9,10,11,12]
print("\ninitial list")
print(List)
List.remove(5)
List.remove(6)
print("\nafter removing")
print(List)
for i in range(1,5):
    List.remove(i)
print("\nafter removing")
print(List)
