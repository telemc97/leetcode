class Solution:
    def __init__(self):
        
        grid=[[0,0,0,1,1,1,0,1,0,0],
              [1,1,0,0,0,1,0,1,1,1],
              [0,0,0,1,1,1,0,1,0,0],
              [0,1,1,0,0,0,1,0,1,0],
              [0,1,1,1,1,1,0,0,1,0],
              [0,0,1,0,1,1,1,1,0,1],
              [0,1,1,0,0,0,1,1,1,1],
              [0,0,1,0,0,1,0,1,0,1],
              [1,0,1,0,1,1,0,0,0,0],
              [0,0,0,0,1,1,0,0,0,1]]
        
        print(self.numEnclaves(grid))
        

    def numEnclaves(self, grid: list[list[int]]) -> int:
        max_steps = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if (grid[i][j]==1):
                    found = [0,0]
                    found = self.explore(grid, found, i, j)
                    if (found[0]>max_steps and found[1]==0): max_steps = found[0]
        return max_steps
    
    #found[0] is steps
    #found[1] is 0 if not touching the perimeter | is 1 if touching the perimeter

    def explore(self, grid, found_, x,y)->int:
        if (x>=0 and y>=0 and x<=len(grid)-1 and y<=len(grid[0])-1 and grid[x][y]==1):
            if (x==0 or y==0 or x==len(grid)-1 or y==len(grid[x])-1):
                found_[1]=1
            found_[0]+=1
            grid[x][y]=2
            found_=self.explore(grid, found_, x,y+1)
            found_=self.explore(grid, found_, x+1,y)
            found_=self.explore(grid, found_, x,y-1)
            found_=self.explore(grid, found_, x-1,y)
        return found_

def main():
    Solution()


if __name__ == '__main__':
    main()