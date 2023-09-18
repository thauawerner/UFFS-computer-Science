package OOP2;

import java.util.ArrayList;

public class Pedidos {

    ArrayList<ItensPedido> produtos;
    private double valorTotal;

    public Pedidos() {
        produtos = new ArrayList<>();
        valorTotal = 0.0;

    }

    public void addItem(ItensPedido item) {
        produtos.add(item);
        valorTotal += item.getValTotal();
    }

    public ItensPedido getItem(int index) {
        if (index >= 0 && index < produtos.size()) {
            return produtos.get(index);
        }
        return null;
    }

    public double getValorTotal() {
        return valorTotal;

    }

    public ArrayList<ItensPedido> getProdutos() {
        return produtos;
    }
}
