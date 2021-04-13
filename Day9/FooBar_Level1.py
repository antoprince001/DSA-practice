def check(x,y):
  sum1 = 0
  sum2 = 0
  for i in x:
    sum1+=i
  for j in y:
    sum2+=j
   
  if(len(x)>len(y)):
    return sum1-sum2
  else:
    return sum2-sum1
   
  
