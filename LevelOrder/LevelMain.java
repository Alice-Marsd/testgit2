package LevelOrder;

import java.util.*;
 

public class LevelMain {
    /**
     * 
     * @param root TreeNode¿‡ 
     * @return int’˚–ÕArrayList<ArrayList<>>
     */
    public ArrayList<ArrayList<Integer>> levelOrder (TreeNode root) {
    	 ArrayList<ArrayList<Integer> > output=null;
    	 ArrayList<Integer> outputline = null;
    	 Queue<TreeNode> queue = null;
    	 TreeNode p=null;
    	 queue.add(root);
    	 while(!queue.isEmpty())
    	 {
    		 int queSize=queue.size();
    		 while(queSize!=0)
    		 {
    			 p=queue.poll();
    			 outputline.add(p.val);
    			 if(p.getLeft() != null)
        		 {
        			 queue.add(p.left);
        		 }
        		 if(p.getRight() != null)
        		 {
        			 queue.add(p.right);
        		 }
        		 queSize--;
        		 
    		 }
    		 output.add(outputline);
    		 
    	 }
    	return output;
    }
    public static void main(String[] args) {
		
	}
}
