count = []
count.append(0)

for i in range(4):
    toff, ton = map(int, input().split())
    count.append(count[i] + ton - toff)

print(max(count))