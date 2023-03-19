

import math

def f(arr,b):

    num=math.floor(b)
    l=0
    r=len(arr)-1

    while(l<=r):
        mid=(l+r)//2

        if(arr[mid]<num):
            l=mid+1
        
        
        elif(arr[mid]>num):
            r=mid-1

        else:         #arr[mid]==num
            return num   
    
    return arr[r] #l goes above r and breaks loop
                  #r=l-1 at that point

print(f([1,2,3,5,7,9,11,13],6.5))
print(f([1,2,3,5,7,9,11,15,16,19],13.2))
