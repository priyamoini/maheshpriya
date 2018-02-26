ass PrintAllKLengthStrings {
 
    // Driver method to test below methods
    public static void main(String[] args) {             
        System.out.println("First Test");
        char set1[] = {'a', 'b'};
        int k = 3;
        printAllKLength(set1, k);
         
        System.out.println("\nSecond Test");
        char set2[] = {'a', 'b', 'c', 'd'};
        k = 1;
        printAllKLength(set2, k);        
    }    
 
    
    static void printAllKLength(char set[], int k) {
        int n = set.length;        
        printAllKLengthRec(set, "", n, k);
    }
    static void printAllKLengthRec(char set[], String prefix, int n, int k) {
         
        // Base case: k is 0, print prefix
        if (k == 0) {
            System.out.println(prefix);
            return;
        }
 
 
        for (int i = 0; i < n; ++i) {
             
            String newPrefix = prefix + set[i]; 
             
            
            printAllKLengthRec(set, newPrefix, n, k - 1); 
        }
    }
}
