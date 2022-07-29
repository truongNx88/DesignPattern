import java.util.Random;

public class MainProcess {

    private static void generatePromoteStrategy(Random random, Ticket ticket) {
        int strategyIndex = random.nextInt(4);
        switch (strategyIndex) {
            case 0:
                ticket.setPromoreStrategy(new NoDiscountStatery());
                break;
            case 1:
                ticket.setPromoreStrategy(new QuaterDiscountStatery());
            case 2:
                ticket.setPromoreStrategy(new EightDiscountStatery());
                break;
            default:
                ticket.setPromoreStrategy(new HalfDiscountStatery());
                break;
        }
    }

    private static void LogTicketDetails(Ticket ticket) {
        System.out.println("Promoted price of  " + ticket.getName() + " is " + ticket.getPromotedPrice() + " " + ticket.getPromoteStrategy().getClass());
        System.out.println();
    }

    public static void main(String[] args) {
        System.out.println("Start getting tickets!");
        Random random = new Random();
        for (int i = 1; i <= 5; i++) {
            Ticket ticket = new Ticket();
            ticket.setName("Ticket "+ i);
            ticket.setPrice(50 * i);
            
            generatePromoteStrategy(random, ticket);
            LogTicketDetails(ticket);

            generatePromoteStrategy(random, ticket);
            LogTicketDetails(ticket);

           
        }
    }
}
