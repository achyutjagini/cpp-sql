#Find the length of the longest substring that does not contain any vowel 
#input string="ceebbaceeffo"
#Output:- 2
'''''
string="ceebbaceeffo"

vowel={'a','e','i','o','u'}

res=0

for i in range(len(string)):
    for k in range(i,len(string)):

        if all(c not in vowel for c in string[i:i+k]):
            res=max(res,i+k-i)

print(res)
'''''


def isvowel(ch):
    vowel={'a','e','i','o','u'}
    if ch in vowel:
        return True
    return False
    

def maxlength(s):

    res=0
    count=0
    for i in range(len(s)):
        if(isvowel(s[i])):
            count=0
        
        else:
            count+=1

        res=max(res,count)

    return res

print(maxlength("ceebbaceeffo"))

