package LinkNodeExm;

public class offer11 {
      public static void main(String[]
args)
int num=NumberOf1(47);
System.out.printn(num);
}
public static int NumberOf1(int n){
    /*String binarynum =
Integer.toBinaryString(n);
         int count = 0;
         //int num[] = new
int[binarynum.length()];
        for(int
i=f(binarynum.charAt(I) = = '1'){
                     count++
                }
            }
            return count;*/
            int count=0;
            while(n!=0){
                count++
                n=n&(n-1);
            }
            return count;
        }
    }
