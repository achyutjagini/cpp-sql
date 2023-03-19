#based on minimum effort path
#a grid is given
#0-empty
#1-obstacle
#2-target
#k is given 
#return true if can reach from source to target

import heapq
import sys


def minimumEffortPath(matrix):  
        rows=len(matrix)
        cols=len(matrix[0]) 
        cost=[[sys.maxsize for i in range(cols)] for j in range(rows)]
        cost[0][0]=0

        minh=[[0,0,0]]        #cost,row,column
        direc=[[0,1],[0,-1],[1,0],[-1,0]] #up,down,right,left 

        while(minh): 
            ele=heapq.heappop(minh)
            curr_cost,row,col=ele[0],ele[1],ele[2]

            for d in direc:
                newrow=row+d[0]
                newcol=col+d[1]
                if(newrow>=0 and newrow<rows and newcol>=0 and newcol<cols):
                    
                    if(matrix[row][col]=="V"):
                        continue
                    new_cost=curr_cost+1

                    if(cost[newrow][newcol]>new_cost):
                        cost[newrow][newcol]=new_cost
                        
                        heapq.heappush(minh,[new_cost,newrow,newcol])

        if(cost[rows-1][cols-1]!=sys.maxsize):
            return cost[rows-1][cols-1]
        else:
            return -1          
print(minimumEffortPath([['D','V','D','D','D'],['D','D','D','V','D'],['V','V','V','D','D'],['D','V','V','D','V'],['D','D','D','D','D']]))