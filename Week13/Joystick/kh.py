def abs(num1):
    if num1>=0:
        return num1
    else:
        return (-1)*num1

def solution(name):
    answer = 0
    if len(name)==1:
        return int(name[0])-int('A')
    else:
        up=int(name[0])-int('A')
        if abs(int(name[1])-int('A')>=int(name[len(name)-1])-int('A')):
            for i in range(len(name)-1,0):
                answer+=1
                answer+=abs(int(name[i])-int('A'))
        else:
            for i in range(1,len(name)):
                answer+=1
                answer+=abs(int(name[i])-int('A'))
    return answer

