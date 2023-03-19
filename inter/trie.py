class TrieNode:
    def __init__(self) -> None:
        self.children={}
        self.endofword=False
    
class Trie:
    def __init__(self) -> None:
        
        self.root=TrieNode()

    
    def insert(self,word):
        cur=self.root
        for c in word:
            if c in cur.children:
                cur=cur.children[c]
            
            else:
                cur.children[c]=TrieNode()
                cur=cur.children[c]
            
        cur.endofword=True

    def search(self,word):
        cur=self.root
        for c in word:
            if c in cur.children:
                cur=cur.children[c]
            else:
                print("not found")
                return
        if cur.endofword==True:
            print("Found")
        else:
            print("not Found")
            return
        

a=Trie()
a.insert("abcde")
a.search("ab")
a.search("abcde")
            


    


