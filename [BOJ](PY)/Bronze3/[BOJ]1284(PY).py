nums = "."
widths = []

while True:
    width = 0
    nums = input()
    if nums == "0":
        break

    for num in nums:
        width = width + 1
        if num == '1':
            width = width + 2
        elif num == '0':
            width = width + 4
        else:
            width = width + 3
    width += 1
    if(width != 1):
        widths.append(width)

print(*widths)