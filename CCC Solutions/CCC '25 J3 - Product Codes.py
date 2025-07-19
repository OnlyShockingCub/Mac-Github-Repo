n = int(input())

for j in range(n):
    num_code = input()
    uppercase = ''
    num = 0
    i = 0

    while i < len(num_code):
        if num_code[i].isupper():
            uppercase += num_code[i]
            i += 1
        elif num_code[i].isdigit() or num_code[i] == '-':
            num_str = num_code[i]
            i += 1
            while i < len(num_code) and num_code[i].isdigit():
                num_str += num_code[i]
                i += 1
            num += int(num_str)
        else:
            i += 1

    print(f"{uppercase}{num}")
