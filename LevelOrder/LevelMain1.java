package LevelOrder;

import java.util.ArrayList;

public class LevelMain1 {
	 public ArrayList<ArrayList<Integer>> levelOrder (TreeNode root)
	 {
		 if(root==null) return null;
		 ArrayList<ArrayList<Integer>> output=null;
		 levelOrderCore(root,output,0);
		 return output;
	 }

	private void levelOrderCore(TreeNode root, ArrayList<ArrayList<Integer>> output, int depth) {
		// TODO Auto-generated method stub
		if(root==null) return;
		if(output.size()==depth) output.add(new ArrayList<Integer>()) ;
		output.get(depth).add(root.val);
		levelOrderCore(root.left,output,depth+1);
		levelOrderCore(root.right, output, depth+1);	
	}
}
