public class Main {
    public static void main(String[] args) {
        System.out.println("EX5");
        int[] prime = new int[1000];
        for(int i = 2; i <= prime.length; i++){
            boolean isPrime = true;
            //System.out.println(i);
            for(int j = 2; j < i; j++){
                if(i%j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                System.out.println(i);
            }
        }
    }
}
