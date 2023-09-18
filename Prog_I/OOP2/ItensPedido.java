package OOP2;

/**
 * ItensPedido
 */
public class ItensPedido {

    Produto produto;
    private int qtde;
    private double valTotal;

    public ItensPedido(int codigo, double valor, String desc, int qtde){
        this.produto = new Produto(codigo, valor, desc);
        this.qtde = qtde;
        this.valTotal = produto.getValor() *qtde;
    }

    public void setProduto(int codigo, double valor, String desc) {
        this.produto = new Produto(codigo, valor, desc);
    }

    public Produto getProduto() {
        return produto;
    }

    public void setQtde(int qtde) {
        this.qtde = qtde;
    }

    public double getQtde() {
        return qtde;
    }   

    public double getValTotal() {
        valTotal = produto.getValor() *getQtde(); 
        return valTotal;
    }
}