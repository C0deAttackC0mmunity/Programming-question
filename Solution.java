
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static void main(String []args){
     int []nums={2,3,6,7};
     int target=7;
        System.out.println(combinationSum(nums,target));
    }
    public static List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>>ans=new ArrayList<>();
        generate(candidates,target,0,ans,new ArrayList<>());
        return ans;
    }
    public static void generate(int []candidates,int target,int i,List<List<Integer>>ans,List<Integer>al){
        if(target==0){
            ans.add(new ArrayList<>(al));
            return;
        }
        while(i<candidates.length){
            if(candidates[i]<=target){
                al.add(candidates[i]);
                generate(candidates,target-candidates[i],i,ans,al);
                al.remove(al.size()-1);
            }
            i++;
        }
    }
}