def swap_case(s):
    news = ''
    for ch in s:
        if(ch.islower()):
            news += ch.upper()
        elif(ch.isupper()):
            news += ch.lower() 
        else:
            news += ch
    return news

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
