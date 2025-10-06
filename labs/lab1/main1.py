#1
def tas1():
    _int = 5
    _float = 5.2
    _str = "string"
    _bool = True
#2
def tas2():
    name = "Lev, Саня, Алиса, Денис"
    age = 18
    print (name ,age)
#3
def tas3():
    a = 342
    b = 56.2
    c = "43"
    print (a+b+ int(c))
#4
def pow(num, step):
    if(step == 0):
        return 1
    else:
        return(num + pow(num, step-1))

def tas4():
    a = 3
    b = 8
    print((a+4*b)*(a-3*b) + pow(a,2))

#5
def tas5():
    a = int(input())
    b = int(input())
    print("S = ", a*b)
    print("P = ", (a+b)*2)
#6
def tas6():
    print("*   *   *\n" \
    " * * * *\n" \
    "  *   *")
#7
def tas7():
    num1 = 2
    num2 = 3
    print("+", num1+num2)
    print("-", num1-num2)
    print("*", num1*num2)
    print("/", num1/num2)
    print("//", num1//num2)
    print("%", num1%num2)
    print("^", pow(num1, num2))

    print("num1 > num2", num1>num2)
    print("num1 < num2", num1<num2)
    print("num1 >= num2", num1>=num2)
    print("num1 <= num2", num1<=num2)
    print("num1 == num2", num1==num2)
    print("num1 != num2", num1+num2)
#8
def tas8():
    name = "Lev"
    age = 18
    print(f"Меня зовут : {name}. Мне {age} лет")
#9
def tas9():
    a = "Съешь еще"
    b = "этих мягких"
    c = "французских булок,"
    d = "да выпей чаю"
    print(a + ' ' + b + ' ' + c + ' ' + d)
#10
def tas10():
    str = "Нет! Да! "
    print(str*4)
#11
def tas11():
    inp = input()
    nums = inp.split(',')
    sum = int(nums[0]) + int(nums[2])
    print("Результат вычислений: ",sum//int(nums[1]))
#12
def tas12():
    str = input()
    if(str.__len__() >= 10):
        print(str[0:4])
        print(str[str.__len__()-2:str.__len__()])
        print(str[3:8])
        print(str[::-1])
    else: print("error")
tas6()