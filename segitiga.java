class Segitiga{
      int a,b,c;
      double da,db,dc;

      Segitiga(int a, int b, int c){
             this.a = a;
             this.b = b;
             this.c = c;
      }

      Segitiga(double a, double b, double c){
             this.da = a;
             this.db = b;
             this.dc = c;
      }

      boolean bukanSegitiga(){
            return true;
      } 

      static boolean isSegitigaSamasisi(int a, int b, int c){
             boolean sgtgSmss = (a==b) && (b == c);
             return    sgtgSmss;
      }

      static boolean isSegitigaSamasisi(double da, double db, double dc){
             boolean sgtgSmss = (Math.round(da)==Math.round(db)) && (Math.round(db) == Math.round(dc));
             return    sgtgSmss;
      }

      static boolean isSegitigaSamakaki(int a, int b, int c){
            return true;
      }

      static boolean isSegitigaSikusiku(int a, int b, int c){
            return true;
      }

       boolean SegitigaBebas(){
            return true;
       }

       public static void main (String args[]){
              Segitiga S1 = new Segitiga(3,4,5);
              Segitiga S2 = new Segitiga(3.00001, 3.00002, 3.0003);
              System.out.println("Apakah S1 samasisi? " + isSegitigaSamasisi(S1.a, S1.b, S1.c));
              System.out.println("Apakah S2 samasisi? " + isSegitigaSamasisi(S2.da, S2.db, S2.dc));
       }
}
