class Solution:
    # def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
    def __init__(self):

        nums1 = [2,4,6,8,9]
        nums2 = [3,7,9]
        nums3 = self.produce_sorted_array(nums1, nums2)
        print(nums3)
        median = self.get_the_median(nums3)
        print(median)
    
    def get_the_median(self, nums3) -> float:
        n=len(nums3)
        if (n%2==0):
            median = (nums3[n//2] + nums3[n//2 - 1])/2
        else:
            median = nums3[n//2]

        return median


    def produce_sorted_array(self, nums1: list[int], nums2: list[int]) -> list[int]:
        new_size = len(nums1) + len(nums2)
        nums3=[]
        nums3 = [0 for i in range(new_size)] 
        i=0
        k=0
        l=0
        while i<new_size:
            if (nums1[k]<nums2[l]):
                nums3[i]=nums1[k]
                k+=1
                i+=1
            elif(nums2[l]<nums1[k]):
                nums3[i]=nums2[l]
                l+=1
                i+=1
            else: #nums1[k]==nums2[l]
                nums3[i]=nums1[k]
                nums3[i+ 1]=nums2[l]
                l+=1
                k+=1
                i+=2
            if (k==len(nums1)):
                nums3[i:]=nums2[l:]
                break
            if (l==len(nums2)): 
                nums3[i:]=nums1[k:]
                break
        return nums3

def main():
    Solution()

if __name__ == "__main__":
    main()
