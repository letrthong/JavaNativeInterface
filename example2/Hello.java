class Hello {
 
  //Native method declaration
  public native void printGreeting();
  public native int  sum(int a, int b);

  static {
    System.loadLibrary("hello");
  }

  public static void main(String[] args) {
    Hello hello = new Hello();
    hello.printGreeting();
    System.out.println("=" + hello.sum(3,4)); 
  }
}
