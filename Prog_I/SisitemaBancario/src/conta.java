public class conta {

    private int numero;
    private double saldo;
    private double limite;

    void deposita(double saldo){}

    public double getLimite() {
        return limite;
    }
     public int getNumero(){
        return numero;
     }

     public double getSaldo(){
        return saldo;
     }

     public void setLimite(double limite) {
         this.limite = limite;
     }

     public void setNumero(int numero) {
         this.numero = numero;
     }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    } 
}
