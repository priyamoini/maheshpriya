 public String[] make(int num) {

    int n = 0;
    String[] arr = new String[num];
    for (int i = 0; i < num; i++) {
        arr[i] = String.valueOf(n);
        n = n + 1;
    }
    return arr;
   }
