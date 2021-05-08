def count_substring(string, sub_string):
    count=0
    for ind in range(0,len(string)):
        if(string[ind] == sub_string[0]):
            flag = 0
            if((ind+len(sub_string)-1)<len(string)):
                for j in range(0,len(sub_string)):
                    if(string[ind+j] != sub_string[j]):
                        flag = 1
                        break
            else:
                 flag=1      
            if(flag==0):
                count = count+1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
