public class App {
    public static void main(String[] args) throws Exception {
        /**
         * Codigo feito em sala de aula no dia 04/09/2023
         * 
         * conta c = new conta();
         * c.limite = 1000;
         * c.saldo = 1000;
         * c.numero = 1;
         * 
         * conta thaua = new conta();
         * thaua.numero = 2;
         * thaua.saldo = 22;
         * thaua.limite = 1400;
         */

        clientes cliente = new clientes();
        cliente.setCodigo(1);
        cliente.setNome("Thaua");
        System.out.println("nome do cliente: " + cliente.getNome());
        System.out.println("Codigo do cliente: " + cliente.getCodigo());

        clientes cliente1 = new clientes();
        cliente1.setCodigo(2);
        cliente1.setNome("Samuel");
        System.out.println("nome do cliente: " + cliente1.getNome());
        System.out.println("Codigo do cliente: " + cliente1.getCodigo());

        creditCard card = new creditCard();
        card.setNum(011);
        card.setVal("07/33");
        System.out.println("Numero do cartao: " + card.getNum());
        System.out.println("Vallidade do cartao: " + card.getVal());

        creditCard card1 = new creditCard();
        card1.setNum(022);
        card1.setVal("06/32");
        System.out.println("Numero do cartao: " + card1.getNum());
        System.out.println("Vallidade do cartao: " + card1.getVal());

    }
}
