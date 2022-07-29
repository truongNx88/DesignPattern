/**
 * Ticket
 */
public class Ticket {

    private IPromoteStrategy promoteStrategy;
    private double price;
    private String name;

    public Ticket(IPromoteStrategy promoreStrategy) {
        this.promoteStrategy = promoreStrategy;
    }

    public Ticket() {

    }

    public IPromoteStrategy getPromoteStrategy() {
        return this.promoteStrategy;
    }

    public void setPromoreStrategy(IPromoteStrategy promoteStrategy) {
        this.promoteStrategy = promoteStrategy;
    }

    public double getPrice() {
        return this.price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getPromotedPrice() {
        return promoteStrategy.doDiscount(price);
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

}