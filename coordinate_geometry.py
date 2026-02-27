import math
x1 = int(input("Enter x1 value\n"))
x2 = int(input("Enter x2 value\n"))
y1 = int(input("Enter y1 value\n"))
y2 = int(input("Enter y2 value\n"))

xlerinCikarmasiVeKaresi = (x2-x1)*(x2-x1)
ylerinCikarmasiVeKaresi = (y2-y1)*(y2-y1)
toplamları = xlerinCikarmasiVeKaresi + ylerinCikarmasiVeKaresi
distance = math.sqrt(toplamları)

print(f"Distance: {distance}")