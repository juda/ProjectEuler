import java.math.BigInteger;
import java.util.PriorityQueue;
import java.util.Comparator;

public class p119 {
	Comparator<BigInteger> cmp=new Comparator<BigInteger>(){
		public int compare(BigInteger a,BigInteger b){
			return -a.compareTo(b);
		}
	};
	PriorityQueue<BigInteger> heap=new PriorityQueue<BigInteger>(50,cmp);
	
	boolean check(BigInteger value,int e){
		int res=0;
		for(;value.compareTo(BigInteger.valueOf(0))!=0;value=value.divide(BigInteger.valueOf(10)))
			res+=value.mod(BigInteger.valueOf(10)).intValue();
		return e==res;
	}
	
	void work(){
		for(int i=2;i<=400;i++){
			BigInteger value=new BigInteger(Integer.toString(i));
			BigInteger temp=new BigInteger(Integer.toString(i));
			for(int j=1;j<=100;j++){
				value=value.multiply(temp);
				if(check(value,i)){
					heap.add(value);
					if(heap.size()>30){
						heap.poll();
					}
				}
			}
		}
		System.out.println(heap.size());
		System.out.println(heap.peek().toString());
	}
}
