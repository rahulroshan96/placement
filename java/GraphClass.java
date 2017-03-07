import java.util.*;
import java.math.*;

public class GraphClass{
	
	static void bfs(int a[][], int n, int S){
	
		Boolean visited[] = new Boolean[n];
		Arrays.fill(visited, false);
		visited[S] = true;
		Queue<Integer> myQ = new LinkedList<Integer>();
		myQ.add(S);
		while(!myQ.isEmpty()){
			int temp = myQ.peek();
			System.out.print(temp+" ");
			myQ.remove();
			for(int i=0;i<n;i++){
				if(a[temp][i] == 1 && !visited[i]){
					myQ.add(i);
				}
			}
		}	
	}
	
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		int a[][] = new int[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j] = in.nextInt();
			}
		}
		bfs(a,n,0);
	}
}

