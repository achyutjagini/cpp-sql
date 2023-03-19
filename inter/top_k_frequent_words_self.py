class reversor:
    def __init__(self, obj):
        self.obj = obj

    def __eq__(self, other):
        return other.obj == self.obj

    def __lt__(self, other):
           return other.obj < self.obj

class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        
        s=[]
        f=[]
        
        d=collections.Counter(words)
        for i in d:
            s.append((i,d[i]))
            
        s.sort(key=lambda y: (reversor(y[1]),y[0]))
        
        for i in s:
            f.append(i[0])
        
        return f[:k]
                