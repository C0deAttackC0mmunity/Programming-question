
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static void main(String []args){
     int []nums={1,2,0};
     int target=7;
        System.out.println(firstMissingPositive(nums));
    }
    public static int firstMissingPositive(int[] nums) {
        int size=segregate(nums);
        if(size==0){
            return 1;
        }
        for(int i=0;i<size;i++){
            int abs=Math.abs(nums[i]);
            if(abs-1>=0&&abs-1<size&&nums[abs-1]>0){
                nums[abs-1]=-nums[abs-1];
            }
        }
        for(int i=0;i<size;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return size+1;
    }
    public static int segregate(int []nums){
        int start=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>0){
                start++;
                int temp=nums[i];
                nums[i]=nums[start];
                nums[start]=temp;
            }
        }
        return start+1;
    }
}