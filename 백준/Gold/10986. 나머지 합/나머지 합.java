import java.util.*;

public class Main {
	public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int m = s.nextInt();
		
		long[] remainder = new long[m];
        for(int i = 0 ; i < m ; i++) {
			remainder[i] = 0;
		}
		int sum = 0;
		for(int i = 0; i < n ; i++) {
			sum = (sum+s.nextInt())%m;
			remainder[sum]++;
			
		}
		long count = 0;
		 
		for(int i = 0; i < m ; i++) {
			if(remainder[i] > 1) {
				count += remainder[i] * (remainder[i] - 1) / 2;
			}
		}
		count += remainder[0];
        
		System.out.println(count);
		
	}
}