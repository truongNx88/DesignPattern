
public class CashManager {

    private double cashInAccount;

    public CashManager(double cashAmount) {
        this.cashInAccount = cashAmount;
    }

    public boolean hasEnoughMoney(double cashAmount) {
        return (this.cashInAccount > cashAmount);
    }

    public void withdraw(double cashAmount) {
        this.cashInAccount -= cashAmount;
        System.out.println("Cash in account: " + this.cashInAccount);
    }

    public void deposit(double cashAmount) {
        this.cashInAccount += cashAmount;
        System.out.println("Cash in account: " + this.cashInAccount);
    }

}
