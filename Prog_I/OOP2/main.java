package OOP2;

public class main {

    public static void main(String[] args) {

        // ItensPedido item = new ItensPedido(01, 50, "miojo", 1);
        // System.out.println(item.getProduto());
        // item.setQtde(0);
        // System.out.println(item.getValTotal());

        Pedidos pedidos = new Pedidos();
        pedidos.addItem(new ItensPedido(1, 50, "miojo", 4));
        System.out.println(pedidos.getValorTotal());
        

        pedidos.addItem(new ItensPedido(2, 50, "miojo", 4));
        pedidos.addItem(new ItensPedido(3, 30, "arroz", 2));
        pedidos.addItem(new ItensPedido(4, 25, "feijão", 3));
        pedidos.addItem(new ItensPedido(5, 10, "macarrão", 5));

        // Para acessar o código do terceiro item (índice 2, pois a contagem começa em
        // 0)
        ItensPedido terceiroItem = pedidos.getItem(2);
        int codigoDoTerceiroItem = terceiroItem.getProduto().getCodigo();
        System.out.println("Código do Terceiro Item: " + codigoDoTerceiroItem);
    }

}
