import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String tempA="";
		String tempB="";

        Scanner numA = new Scanner(System.in);

        tempA = numA.next();
        tempB = numA.next();
        
        int sizeA = tempA.length();
        int sizeB = tempB.length();
        
        numA.close();
        
        
		ArrayList<Integer> A = new ArrayList<Integer>();
		for(int i=0;i<sizeA;i++) {
			A.add(i, 0);
		}
        
		ArrayList<Integer> B = new ArrayList<Integer>();
		for(int i=0;i<sizeB;i++) {
			B.add(i, 0);
		}
		
		
        for(int i=0;i<sizeA;i++) {
				A.remove((sizeA-1)-i);
				A.add((sizeA-1)-i, (int)Character.getNumericValue(tempA.charAt(i)));
				
			}
        
        for(int i=0;i<sizeB;i++) {
				B.remove((sizeB-1)-i);
				B.add((sizeB-1)-i, Character.getNumericValue(tempB.charAt(i)));
			}
		
        
        
        
		
        int sum_len = Math.max(sizeA,sizeB)+1;
		ArrayList<Integer> sum = new ArrayList<Integer>();
		for(int i=0;i<sum_len;i++) {
			sum.add(0);
		}
		
  
		//양수+양수
		
			int carry_before=0;
			for(int i=0;i<Math.min(sizeA,sizeB);i++) {
				int temp = A.get(i)+B.get(i)+carry_before;
				int carry = Math.floorDiv(temp,10);
				carry_before = carry;
				sum.remove(i);
				sum.add(i, Math.floorMod(temp,10)); 
			}
			
        
        
        
        
        
        
			for(int i=Math.min(sizeA,sizeB);i<sum_len;i++){
				if(sizeA<sizeB) {
					if(i == sum_len-1) {
						int temp = carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					else {
						int temp = B.get(i)+carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					
				}
                
				else if(sizeA>sizeB){
					
					if(i == sum_len-1) {
						int temp = carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					else {
						int temp = A.get(i)+carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					
				}
                
				else {
					
					if(i == sum_len-1) {
						int temp = carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					else {
						int temp = carry_before;
						int carry = Math.floorDiv(temp,10);
						carry_before = carry;
						sum.remove(i);
						sum.add(i, Math.floorMod(temp,10)); 
					}
					

				}
            }
			
		
		int start=0;
		int printed=0;
		for(int i=0;i<sum_len ;i++) {
			if((int)sum.get(sum_len-1-i)!=0) {
				start=1;
			}
			if(start==0) {
				continue;
			}
			System.out.print(sum.get((sum_len-1)-i));
		}
		
		
	}
}
