
a=[1,3,4,5,6,8,10]

dig=math.floor(7)


l=0
r=len(a)-1

while(l<=r):
     mid =(l+r)//2

     if(nums[mid]<dig):
        ans=nums[mid]
	     l=mid+1

        if(nums[r]>dig):
           break
      
     elif(nums[mid]>dig):
        r=mid-1
     
     else:
         return dig

return ans
